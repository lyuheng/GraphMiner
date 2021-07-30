# GraphMiner
Graph Pattern Mining (GPM) Framework on CPU and GPU

Quick Start
-----------

Create the bin directory:

    $ mkdir bin

Go to each sub-directory, e.g. src/triangle, and then

    $ cd src/triangle; make

Find out commandline format by running executable without argument:

    $ cd ../../bin
    $ ./tc_omp_base

Run triangle counting on an undirected graph:

    $ ./tc_omp_base /inputs/citeseer/graph

To control the number of threads, set the following environment variable:

    $ export OMP_NUM_THREADS=[ number of cores in system ]


Graph Loading
-------------

The graph loading infrastructure understands the following formats:

+ `graph.meta.txt` text file specifying the number of vertices, edges and maximum degree

+ `graph.vertex.bin` binary file containing the row pointers

+ `graph.edge.bin` binary file containing the column indices


CITATION
================================================================================

Please cite the following paper if you use this code:

```
@article{Pangolin,
	title={Pangolin: An Efficient and Flexible Graph Mining System on CPU and GPU},
	author={Xuhao Chen and Roshan Dathathri and Gurbinder Gill and Keshav Pingali},
	year={2020},
	journal = {Proc. VLDB Endow.},
	issue_date = {August 2020},
	volume = {13},
	number = {8},
	month = aug,
	year = {2020},
	numpages = {12},
	publisher = {VLDB Endowment},
}
```

