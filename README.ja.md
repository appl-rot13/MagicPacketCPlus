[English](README.md) | [日本語](README.ja.md)

# Magic Packet (written in C/C++)

Wake-on-LANのマジックパケットを送信するサンプル。

## 使い方

IPアドレスとMACアドレスを設定してVisual Studioでビルドし、出力されたexeファイルを使用します。

### IPアドレスの設定

Wake-on-LAN対象のPCが所属するネットワークのブロードキャストアドレスを指定します。

```cpp
#define IP_ADDRESS	"192.168.64.15"
```

### MACアドレスの設定

Wake-on-LAN対象のNICのMACアドレスを指定します。

```cpp
#define MAC_ADDRESS	"c8:60:00:dd:ea:b9"
```

## ライセンス

このソフトウェアは[Unlicense](LICENSE)に基づいてライセンスされています。

## 関連項目

- [MagicPacket](../../../MagicPacket) - C#で書かれたサンプル
- [MagicPacketBatch](../../../MagicPacketBatch) - バッチファイルのサンプル
