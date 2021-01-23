The requirements are:

* CMake 3.11 or better; 3.14+ highly recommended.
* A C++17 compatible compiler
* The Boost libararies (header only part is fine)
* Git
* Doxygen (optional)

Installing Doxygen:

```bash
git clone https://github.com/doxygen/doxygen.git
cd doxygen
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make
make install
```

Installing boost:

```bash
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get install libboost
```

To configure:

```bash
cmake -S . -B build
```

Add `-GNinja` if you have Ninja.

To build:

```bash
cmake --build build
```

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target test
```

To build docs (requires Doxygen, output in `build/docs/html`):

```bash
cmake --build build --target docs
```

To use an IDE, such as Xcode:

```bash
cmake -S . -B xbuild -GXcode
cmake --open xbuild
```
