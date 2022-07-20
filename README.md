## DataCorrector: A GPS spoofing attack detection and correction of synchrophasor measurements

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#Authors">Authors</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## About The Project

The DataCorrector is an IEC 61131 software package for SEL Real-Time Automation Controller (RTAC). The DataCorrector library provides real-time 
Global Position System (GPS) spoofing attacks detection and correction of wide-area synchrophasor data. The library consists of two parts. The first part
is a python script to perform data pre-processing of power network information. The python script generates several .csv files that are required in the 
RTAC data correction library. The second part is a compiled RTAC library of a GPS spoofing attack detection and correction algorithm. The RTAC library 
captures the incoming phasor measurement units (PMU) measurements and provides GPS spoof corrected measurement, estimated angle biases, 
and a Boolean variable to indicate the presence of an attack.  

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

Please refer the "Data Correction Library User Manual" pdf document in this repository for information on how to get started with the RTAC library,
including necessary input data and expected output data.

### Prerequisites

For the Data Preprocessing python script the user will need Python 3 installed and the python packages: numpy and pandas.

For the library the user will need ACSELERATOR RTAC® SEL-5033 Software with firmware version R145 or higher. The following SEL RTAC libraries are also required.
- DescriptiveData V3.5.1.0
- DynamicVectors V3.5.3.0
- FileIO V3.5.6.2
- MathComplex V 3.5.1.0
- MathMatrix V3.5.2.0
- Queue V3.5.3.0
- Quicksort V3.5.1.0
- SEL IEC Types V3.5.0.0
- SysMem V3.5.12.0

### Installation

#### Install the compiled library
The user will need to follow the following steps to install the provided compiled library to SEL RTAC
- Insert -> under the user logic select IEC 61131-3 -> Library
- Click on Manage Libraries
- Click on Install New... and browse to the compiled library
- Close Manage Logic Engine Libraries window
- Select "OSU DataCorrector 1.0.0.11"

#### Start a project with library source code

- Method 1 (Using .exp file)

Click on "Import" and browse to "RTAC_DataCorrector_Library.exp"

- Method 2 (Using XML files)

Create a new project with Project type "XML" and browse to the "RTAC XML files" folder



<!-- AUTHORS -->
## Authors

- Dilan Senaratne (senaratg@oregonstate.edu - Oregon State University, US)
- Travis Hagan (hagantr@oregonstate.edu - Oregon State University, US)
- Shashini De Silva (desilvas@oregonstate.edu - Oregon State University, US)
- Jinsub Kim (kimjinsu@oregonstate.edu - Oregon State University, US)
- Eduardo Cotilla-Sanchez (ecs@oregonstate.edu - Oregon State University, US)

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- LICENSE -->
## License

Distributed under the GNU General Public License v3.0. See `LICENSE` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

De Silva S, Kim J, Cotilla-Sanchez E, Hagan T. On pmu data integrity under gps spoofing attacks: A sparse error correction framework.
IEEE Transactions on Power Systems. 2021 Mar 26;36(6):5317-32.

<p align="right">(<a href="#top">back to top</a>)</p>