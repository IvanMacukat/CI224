# CI224 - Games Development #

This is a simple C++ application which uses OpenGL to demostrate camera control and cube object.

## Installation ##
This game was developed using Fedora 21. You will have to have the development tools plus some c++ packages such as gcc and SDL libaries.

You can do so, with the following commands:

`$ su -`

`$ yum groupinstall "Development Tools"`

`$ yum install gcc-c++ SDL* glew-devel boost-*`

Go to the root folder of the this project and compile by running the following commands:

`$ autoreconf -i`

`$ ./configure`

`$ make`

If you ever run into issues with the game, repeat the process carefully. You can delete your objects and pacman application with the following commands:

`$ make clean`
`$ make`

To execute the program, to go /src folder and run:

`$ ./ci224`
