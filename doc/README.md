5GL 0.10.0 BETA
=====================

Copyright (c) 2018-2019 5GL Developers


Setup
---------------------
[5GL Core](http://5gl.info/en/download) is the original 5GL client and it builds the backbone of the network. However, it downloads and stores the entire history of 5GL transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once. If you would like the process to go faster you can [download the blockchain directly](bootstrap.md).

Running
---------------------
The following are some helpful notes on how to run 5GL on your native platform. 

### Unix

You need the Qt4 run-time libraries to run 5GL-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/5gl-qt (GUI, 32-bit) or bin/32/5gld (headless, 32-bit)
- bin/64/5gl-qt (GUI, 64-bit) or bin/64/5gld (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run 5gl-qt.exe.

### OSX

Drag 5GL-Qt to your applications folder, and then run 5GL-Qt.

### Need Help?

* See the documentation at the [5GL Wiki](https://en.5gl.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#5gl](http://webchat.freenode.net?channels=5gl) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=5gl).
* Ask for help on the [5GLTalk](https://5gltalk.org/) forums, in the [Technical Support board](https://5gltalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build 5GL on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)

Development
---------------------
The 5GL repo's [root README](https://github.com/5gl/5gl/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Coding Guidelines](coding.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/5gl/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [5GLTalk](https://5gltalk.org/) forums, in the [Development & Technical Discussion board](https://5gltalk.org/index.php?board=6.0).
* Discuss on [#5gl-dev](http://webchat.freenode.net/?channels=5gl) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=5gl-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
