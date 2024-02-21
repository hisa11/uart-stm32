#include <mbed.h>

// UARTポートのピン設定
static BufferedSerial pc(D11, D9); // PCとのUART通信にはデフォルトで使われるピンを使用

int main() {
    // UARTの初期化
    pc.set_baud(9600); // ボーレートを設定

    while (1) {
        // PCからのデータを受信
        char buf[256];
        int len = pc.read(buf, sizeof(buf));
        if (len > 0) {
            // 受信したデータを処理
            // ここに受信したデータを処理するコードを追加
        }

        // 何らかのデータを送信
        char txData[] = "Hello, World!\n";
        pc.write(txData, sizeof(txData));
        
        ThisThread::sleep_for(1000ms); // 1秒待機
    }
}