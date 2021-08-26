OpenVR SDK
---

OpenVR is an API and runtime that allows access to VR hardware from multiple 
vendors without requiring that applications have specific knowledge of the 
hardware they are targeting. This repository is an SDK that contains the API 
and samples. The runtime is under SteamVR in Tools on Steam. 

### Documentation

Documentation for the API is available on the [GitHub Wiki](https://github.com/ValveSoftware/openvr/wiki/API-Documentation)

More information on OpenVR and SteamVR can be found on http://steamvr.com


### Building
To build `libopenvr_api` and install the headers do the following
```bash

# create a build directory
mkdir _build && cd _build

# build
cmake -DBUILD_SHARED=1 ..
cmake --build .

# install
cmake --install .

```