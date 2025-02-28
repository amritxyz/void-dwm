# My Build of Dwm, Dmenu, St, Slock, and Slstatus

This is a personal build of **Dwm**, **Dmenu**, **St**, **Slock**, and **Slstatus**. If you are new to this process, there is an [autoInstall Script](https://github.com/amritxyz/void-install) to make things easier. However, if you prefer to do it manually, follow the steps below.

---

## Step 1: Install Dependencies

Before we begin, you’ll need to install the necessary dependencies to compile **Dwm**, **Dmenu**, **St**, **Slstatus**, and **Slock**. Run the following command to install the required libraries:

```bash
sudo xbps-install base-devel harfbuzz-devel libX11-devel libXinerama-devel libXft-devel libXrandr-devel
```

These libraries are crucial for building the software from source.

---

## Step 2: Clone the Repository

Next, we will clone the repository to your machine. 

**Note:** I recommend using the **`~/.local/src/`** directory to store the **Dwm** configs.

```bash
mkdir -p ~/.local/src
```

Now, clone the repository:

```bash
git clone --depth=1 https://github.com/amritxyz/void-dwm.git ~/.local/src/void-dwm
```

---

## Step 3: Compile the Software

After cloning the repository, compile the necessary components with the following commands:

```bash
sudo make -C ~/.local/src/void-dwm/dwm/ clean install
sudo make -C ~/.local/src/void-dwm/dmenu/ clean install
sudo make -C ~/.local/src/void-dwm/st/ clean install
sudo make -C ~/.local/src/void-dwm/slstatus/ clean install
sudo make -C ~/.local/src/void-dwm/slock/ clean install
```

---

## Software Overview

### **Dwm** – Dynamic Window Manager  
**dwm** is a dynamic window manager for X. It can manage windows in three different layouts: **tiled**, **monocle**, and **floating**.

### **Dmenu** – Dynamic Menu  
**dmenu** is a dynamic menu for X, originally designed for use with **dwm**. It efficiently manages large numbers of user-defined menu items.

### **St** – Simple Terminal  
**st** is a simple terminal implementation for X. It focuses on simplicity and performance.

### **Slock** – Simple X Display Locker  
**slock** is a simple X screen locker. It’s lightweight, stable, and widely used by the community. It’s perfect for locking your display when you’re away from your computer.

### **Slstatus** – Status Monitor  
**slstatus** is a status monitor for window managers. It uses **stdin** to fill the status bar with various system information.

---

### Additional Tips:
- Make sure to have **Xorg** and **X11** set up on your system.
- For troubleshooting or questions, feel free to check out the [Issues section](https://github.com/amritxyz/void-dwm/issues) of the repository.
- Customizing **dwm**, **dmenu**, and other components is encouraged for personal use.

Enjoy your setup with **Dwm**, **Dmenu**, **St**, **Slock**, and **Slstatus**!
