MagicPacket (written in C/C++)
==============================
Wake-on-LANのマジックパケットを送信するサンプル。

使い方
------

IPアドレスとMACアドレスを設定してビルドし、
出力されたexeを使用するだけ。

### IPアドレスの設定 ###

Wake-on-LAN対象のPCが所属するネットワークの
ブロードキャストアドレスを指定します。

    #define IP_ADDRESS	"192.168.64.15"

### MACアドレスの設定 ###

Wake-onLAN対象のNICのMACアドレスを指定します。

    #define MAC_ADDRESS	"c8:60:00:dd:ea:b9"

関連情報
--------
C#で書かれたサンプルもあります。  
C#に慣れてくるとC/C++で書くのが億劫に...
