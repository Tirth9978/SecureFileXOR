# 🔐 SecureFileXor

A lightweight and universal file encryption/decryption tool written in **C++** using the **XOR** operation. This tool allows you to encrypt or decrypt any type of file (e.g., `.pdf`, `.txt`, `.jpg`, etc.) using a single command-line interface. The encrypted files are saved with a custom extension like `.tirth`.

---

## 📁 File Structure

```
SecureFileXOR
 SecureFileXor/
├── files/                   # Input folder for original files (PDF, TXT, JPG, etc.)
│   └── example.txt          # Sample file to encrypt
│   └── image.jpg
│   └── document.pdf
│
├── output/                  # Output folder for encrypted/decrypted files
│   └── (auto-generated)     # Files are written here after encryption/decryption
│
├── main.cpp                 # Main encryption/decryption logic using XOR
└──  README.md                # Project documentation
```

## 🛠 Concept I have used

This tool uses the **XOR encryption technique**:

### 🔑 XOR Principle:
```cpp
a = (a ^ b) ^ b
```
Here you can see that first `(a ^ b)` is nothing but encryption and Again `XOR` with `b` is decryption or vice versa . 


## ⚙️ How It Works

To use this XOR encryption tool:

1. Place all the files you want to encrypt or decrypt (e.g., `.pdf`, `.cpp`, `.png`, etc.) inside the `files/` folder.
2. Run the compiled program (`main.cpp` or `main.exe`), and the output files will be generated in the `output/` folder with a new extension (e.g., `.tirth`, `.kalimm`, etc.).

> ✅ The same program is used for both encryption and decryption. Just provide the correct file type and key!


### Step : 
```
(1) Enter the secret KEY you want to use for XOR encryption/decryption.
(2) Enter the file type/extension you want to process (.kalimm , .tirth , .tom). 
```

### 📌 Notes:
- Make sure the `files/` folder contains only the files you want to process.
- Use the **same key** for encryption and decryption.
- Custom file extensions like `.tirth`, `.kalimm`, `.tom` help hide original file types for simple obfuscation.

---
## ⚠️ Disclaimer

This project uses a basic XOR-based encryption technique.  
It is **not suitable for securing sensitive or confidential information**. XOR encryption is simple and reversible and can be broken easily by attackers with modern tools.  

> 🔐 This tool is intended for **educational purposes**, lightweight protection, or obfuscation only.  
> Do not rely on it for real-world data security or commercial applications.

---
