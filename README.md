# Wii Controller Button Tester 🎮

An open-source, lightweight utility built for the Nintendo Wii to test and verify controller inputs. 

## 🚀 Features
* **Real-time feedback**: Instantly see button states toggle between active (green) and idle (grey).
* **Wii Remote support**: Built using libogc to track all face buttons and directional pad inputs.
* **Open-source framework**: Clean, modular C++ code designed as a template for other homebrew developers.

## 🛠️ How to Install on Your Wii
1. Download the latest release package.
2. Format a USB drive or SD card to **FAT32**.
3. Create a folder structure: `apps/WiiButtonTester/`.
4. Place the `boot.dol`, `meta.xml`, and `icon.png` inside that folder.
5. Plug the drive into **USB Port 0** on your Wii and boot up the Homebrew Channel.

## 💻 Technical Layout
This tool utilizes the **devkitPPC** cross-compiler toolchain alongside **libogc** and **GRRLIB** for 2D graphic rendering. 

Contributions and feature modifications are completely welcome! Open a pull request or submit an issue to help improve the tool.
