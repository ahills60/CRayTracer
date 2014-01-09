# CRayTracer
CRayTracer is a C implementation of a ray tracer. This project is before implementation on the SpiNNaker fixed point system.

## Project files
Files are currently separated by functionality and can be described as follows:

* `craytracer.c` contains the `main()` function and initialises the scene, lighting and camera. 
* `craytracer.h` defines the build information of the CRayTracer.
* `construct.h` creates objects that form part of the scene. This file also defines materials and transforms objects into the appropriate positions.
* `datatypes.h` defines triangles, vectors and matrices in addition to commands for manipulating data. 
* `shapes.h` defined primitive objects such as planes, cubes and spheres.
* `rays.h` defines how light rays interact with a scene. This includes object intersection detection and formulation of shadows.
* `lighting.h` is used for special lighting effects given a ray's intersection with an object.
* `image.h` creates a canvas and provides functionality to save the rendered output.
* `objects.h` provides functions to create a scene, add objects to that scene, insert lighting and add a camera to that scene.
* `colours.h` defines primitive colours in RGB format.

