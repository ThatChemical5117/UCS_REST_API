# Ultimate Custom Systems - Web server API

This server serves as the middle man between the two clients ( Website + Desktop Admin panel ) and the database

Utilizes a RESTful architecture to accomplish this. 


## Building

Only available for Linux systems

#### Dependencies 

Required dependencies
- mongocxx-driver ( static )
- Crow
- boost::asio
- boost::test

To use this project install boost libraries and build test following their instructions at https://www.boost.org/releases/latest.
If running test, build boost::test 

#### Compiling

clone this repo and run these commands

```bash
git clone
cd ./
make init
make
```

Note that the `make init` command may need super user permissions since it does install the mongocxx-driver to /usr/local by default

If installation is wanted run
`make install`
