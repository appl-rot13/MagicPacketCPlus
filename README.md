[English](README.md) | [日本語](README.ja.md)

# Magic Packet (written in C/C++)

Sample of sending Wake-on-LAN magic packets in C/C++.

## Usage

Set the IP address and MAC address, build the solution with Visual Studio, and use the generated executable file.

### Setting IP Address

Set the broadcast address for the Wake-on-LAN target PC within the network.

```cpp
#define IP_ADDRESS	"192.168.64.15"
```

### Setting MAC Address

Set the MAC address for the Wake-on-LAN target NIC.

```cpp
#define MAC_ADDRESS	"c8:60:00:dd:ea:b9"
```

## License

This software is licensed under the [Unlicense](LICENSE).

## See also

- [MagicPacket](../../../MagicPacket) - Sample written in C#
- [MagicPacketBatch](../../../MagicPacketBatch) - Sample batch file
