
#include <stdio.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

#define IP_ADDRESS	"192.168.64.15"
#define MAC_ADDRESS	"c8:60:00:dd:ea:b9"
#define PORT		 3708

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WSADATA data;
	WSAStartup(MAKEWORD(2,0), &data);

	// Socket initialize
	int socketfd;
	struct sockaddr_in addr;

	memset(&addr, 0, sizeof(addr));

	addr.sin_addr.s_addr = inet_addr(IP_ADDRESS);
	addr.sin_port = htons(PORT);
	addr.sin_family = AF_INET;

	socketfd = socket(AF_INET, SOCK_DGRAM, 0);

	// Decomposition of MAC Address
	int mac[6];

	sscanf_s(MAC_ADDRESS, "%02x:%02x:%02x:%02x:%02x:%02x",
		     &mac[0], &mac[1], &mac[2], &mac[3], &mac[4], &mac[5]);

	// Create a MagicPacket message
	char msg[6 + 6*17];
	char *ptr = msg;

	for(int i = 0; i < 6; i++) *ptr++ = (byte)0xff;

	for(int i = 0; i < 16; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			*ptr++ = mac[j];
		}
	}

	// Send message and Close socket
	sendto(socketfd, msg, sizeof(msg), 0, (const sockaddr*)&addr, sizeof(addr));

	closesocket(socketfd);
	WSACleanup();

	return 0;
}