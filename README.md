![alt text](https://github.com/artecs-group/FPAA-NNs/blob/master/blob/clusterX10.png?raw=true)

# Cluster of FPAAs to recognize images using neural networks
This software manages a cluster of 40 Anadigm FPAAs placed on 10 Quad Apex V2.0 development boards, allowing the prototyping of analog applications using FPAAs currently commercially available FPAAs prior to being implemented through more advanced FPAA devices or custom IC design, using the Dynamic Reconfiguration capability of the FPAAs.

Currently. this cluster classifies 28×28 MNIST images through a 19-8-6-4 Analog NN with 19-input metrics based on DCT compression.

To perform the classification, the flow shown in the following image is executed.

![alt text](https://github.com/artecs-group/FPAA-NNs/blob/master/blob/pasosReconfi.png?raw=true)

Through a C/C++ application, communication with the boards that form the cluster is opened, and then the neural network design is sent. Subsequently, the classification process begins, which starts by configuring the neural network parameters by modifying the gains of the ‘GainSumDiff’ modules, which are responsible for generating the different inputs of the network. For each classification, the ADCs are read, and the results are stored in a text file.

## Acknowledgements
This work has been supported by MICINN under grant PID2021-123041OB-I00, the CM under grant S2018/TCS-4423, the EU (FEDER) and the Spanish MINECO under grant RTI2018-093684-B-I00 and by Banco Santander under grant PR26/16-20B-1.
