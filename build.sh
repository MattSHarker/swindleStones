
set -e

mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../
make

echo Project has been sucessfully built
