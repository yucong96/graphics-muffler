## Usage
```
mkdir build
cd build
cmake ..
make
cd bin
./muffler {model-name}
```
Here, {model-name} can be tiny.

## Structure
* /src

	main code

* /config

	set the parameter like frequency, air density, sound speed, inlet & outlet plane function, applied sound pressure at inlet (which can be a complex number)

* /tet

	input vtk model

* /output

	output model with sound pressure field

* /tools

	geo_gen can transfer length, radius to generate .geo file

	netgen can generate the mesh of .geo file and get a .vol result

	vol2vtk can transfer .vol file to .vtk file

* /log

	some logs
