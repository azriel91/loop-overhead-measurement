loop-overhead-measurements
=====================

Measures loop overhead in running a single loop to complete a finite amount of work, or multiple loops to complete the same amount of work.

This was created as a spike to help me determine if I should use either:
* a single loop over a finite set of objects, calling a hook for each object
* calling each hook and let it iterate over each object

Note: I know the sum can overflow, but that is not the point of this experiment.

## Pre-requisites

* g++ 4.8
* [maven 3](http://maven.apache.org/download.cgi)

## Compiling

1. In the repository checkout directory, run ``mvn test``. Running the executable can take a minute (or longer) depending on your hardware.

## Sample output:

```
Single Loop: 25.094162 seconds
Multiple Loops: 25.290351 seconds
```