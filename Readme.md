Clone repo with command
git clone --recursive git@github.com:grabusr/inverter.git

Build instructions:

git submodule update --init --recursive // If you not clone with --recursive flag
cd inverter
cmake .
make

Regards
Sławek