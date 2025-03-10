
Misfit64
-----------------

Misfit Modeller 3D was a popular, open source, low poly modeller with a lovely interface. Unfortunately the original developer, Kevin Worchester, gave up on development over a decade ago leaving the project orphaned. Misfit Cubed was based on the last released version of Misfit3D (1.38) with an MD5 exporter added and some bug fixes of the Windows version. The Linux version has the exporter implemented using the plugin system. Misfit Cubed was developed specifically to make it easy to make MD5 models for our game, MekArcade, based on the Cube2 game engine. 

Fortunately someone else recoginised the qualities of the program, it continued as Maverick3D(MM3D) which you can find here https://github.com/clover-moe/mm3d It's in some of the big Linux distros. Even had it running nice on the Pi and on Puppy Linux. It would have made a great app for a tablet. 

Now 13 years later, MisfitCubed is due to rise from the ashes as Misfit64, based on the newer QT5 codebase, from Maverick3D. I have to set up a Linux development environent first, then one on Windows. My memory of that is that it was 'challenging'.

Maverick Model 3D documentation follows.


Maverick Model 3D
-----------------

Maverick Model 3D is a 3D model editor.  It was written and tested on Linux.
It is reported to run on other Unix-like operating systems. It also runs
on Windows.

It is based on [Misfit Model 3D](http://www.misfitcode.com/misfitmodel3d/)
that was developed by Kevin Worcester from 2004 to 2009. Maverick Model 3D
is maintained by Zack Middleton (zturtleman).

The home page is here:
   https://clover.moe/mm3d

Maverick Model 3D requires Qt (5.x) and OpenGL support.  See the INSTALL file
for details on where to get these packages.

This program uses autoconf and automake for building from source.  What this
means is that if you are lucky you can install this program with these
easy steps:

    ./autogen.sh
    ./configure
    make
    sudo make install

This will build a 'mm3d' executable and install it in /usr/local/bin.
Documentation will be in /usr/local/share/doc/mm3d.

For more detailed installation instructions, see the INSTALL file.
See INSTALL.WIN32 for Windows-specific instructions.

## Debian/Ubuntu

Build dependencies:

    sudo apt install autoconf automake make gcc g++ qtbase5-dev qtbase5-dev-tools qttools5-dev-tools libgl1-mesa-dev

qttranslations5-l10n can be used at run-time.

## Fedora

Build dependencies:

    sudo dnf install autoconf automake make gcc gcc-c++ qt5-qtbase-devel qt5-linguist mesa-libGLU-devel

qt5-qttranslations can be used at run-time.

## Arch Linux

Build dependencies:

    sudo pacman -S autoconf automake make gcc qt5-base qt5-tools glu

qt5-translations can be used at run-time.

## openSUSE

Build dependencies:

    sudo zypper install autoconf automake make gcc libqt5-qtbase-devel libqt5-qttools glu-devel

libqt5-qttranslations can be used at run-time.

## macOS

To build a "Maverick Model 3D.app" AppBundle on macOS 10.14+,
install homebrew from http://brew.sh and run the following commands.

(I haven't tested these build steps as my MacBook Pro is limited to
macOS 10.11 and Qt 5.12+ no longer supports it.)

    brew install autoconf automake qt@5
    ./autogen.sh
    ./configure --with-Qt-dir=/usr/local/Cellar/qt@5/5.15.10_1 --with-macosx-version-min=10.13
    make
    make appbundle

--with-macosx-version-min should be set to the value of
`QMAKE_MACOSX_DEPLOYMENT_TARGET` in
/usr/local/Cellar/qt@5/5.15.10_1/mkspecs/common/macx.conf
