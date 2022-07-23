## 🔒 RC4 Multiplatform

**An easy RC4 C++/C#/NodeJS compatible implementation for powerful encryption.**

## 💠 C++ Example

```c++
#include "ARC4.h"
int main() {
    std::string data = "Japancode";
    std::string key = "cool";
    std::string ok = RC4::rc4_perform(data, key);
    std::cout << "Encrypted result: " << ok << "\n";
    std::string txt = RC4::rc4_perform(ok, key);
    std::cout << "Decrypted result: " << txt << "\n";
    return 0;
}
```

## 🗳 NodeJS Example

```js
function main(){
    let bytes = 'Japancode'.split('').map(function (c) { return c.charCodeAt (0); });
    let key = 'cool'.split ('').map(function (c) { return c.charCodeAt (0); });
    let done = rc4_perform(bytes, key);
    console.log("Encrypted result: " + Buffer.from(done).toString('ascii'));
    let okay = rc4_perform(done, key);
    console.log("Decrypted result: " + Buffer.from(okay).toString('ascii'));
};
```

## 🎞 C# Example

```C#
public static void Main(string[] args) {
    byte[] bytes = Encoding.ASCII.GetBytes("Japancode"); 
    byte[] key = Encoding.ASCII.GetBytes("cool"); 
    byte[] enc = rc4(bytes, key); 
    byte[] dec = rc4(enc, key); 
    string str = Encoding.ASCII.GetString(dec); 
    Console.WriteLine (str);
}
```

## 🔗 Socials:

- Telegram: [@japancode](https://t.me/japancode)
- Donation: `0x1ae97b609C30134b8A3b992581b29096Deb28dBb`