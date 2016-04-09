# Encryption Caesar Shift

This project will work as a demo expecting that there will be a file named `./plain.txt` with plain text to be encrypted.
It will then create a `./encrypted.txt` file with the caesar shift encoding.

#### Development
You will need the following
- CMAKE >= 3.4
- conan [https://conan.io](https://conan.io) To manage library dependencies
  - gtest >= 1.7
- Pyton >= 2.7

##### Setup
- Install Deps from above
  - You likely already have CMAKE with CLion
  - conan is a command line utility avilable after installation
  - conan will install gtest
  - Python is usuall on the system by default
- Clone repo
- `cd` to the project directory and run `conan install`
- Open project in CLion and allow CMAKE to refresh it.
- Run the project :)
- Party

You can also provide a custom shift value as part of your command line argument list. It looks a little something like this:
- $`caesar_shift.exe 10`
- $`caesar_shift.exe 20`

You can also specify a file but if you do you will need to specify a custom shift value like above. It will look something like this:
- $`caesar_shift.exe 10 ./some_message.txt`
- $`caesar_shift.exe 20 ./another_message.txt`

Currently this doesn't provide an decryption from command line.
