<div align="center">
    <p>
    <h1>
    VulDegre - Implementation
    </h1>
    <img src="https://img.shields.io/badge/Platform-linux-lightgrey" alt="version"></a>
    <img src="https://img.shields.io/badge/Python-3.7+-orange" alt="version"></a>
    <img src="https://img.shields.io/badge/License-MIT-red.svg" alt="mit"></a>
</div>

## 📥 Setup

#### 1、Clone this repo

- `$ git clone https://github.com/SoftEngineerTeam/VulDegre.git`

#### 2、Install Prerequisites

- `$ pip install -r requirements.txt`

#### 3、Run the testcase

- `$ cd VulDegre/cli`
- `$ python train.py GGNN GraphBinaryClassification ../data/data/testcase`

#### 2、 load trained model and predict

- ``$ cd VulDegre/cli``
- `python test.py GGNN GraphBinaryClassification ../data/data/predict --storedModel_path "./trained_model/GGNN_GraphBinaryClassification_best.pkl"`

#### 1、Dataset

## 🚨 Guide

#### 1、Preprocessing

- (1) **Slicing data**:

  `cd VulDecgre/Edge_processing/slicec_8edges_funcblock/src/main/java/slice`

  Run ClassifyFileOfProject.java to extract C files.

  Run Main.java to slice code functions.

- (2) **Extracting eight  types of relationship edges**:

  `cd VulDecgre/Edge_processing/slicec_8edges_funcblock/src/main/java/sevenEdges`

  We use Joern to generate the code structure graph and we provide a compiled version of joern [here](https://zenodo.org/record/7323504#.Y3OQL3ZByUk). 

  Run Main.java to extrace edges.

  Run concateJoern.java to concate all edges to graph.

## 🤯 Dataset

To investigate the effectiveness of LIVABLE in vulnerability detection, we adopt three vulnerability datasets from these paper:

- Fan et al. [1]: 

```bash
https://drive.google.com/file/d/1-0VhnHBp9IGh90s2wCNjeCMuy70HPl8X/view?usp=sharing
```

- Reveal [2]: 

```bash
https://drive.google.com/drive/folders/1KuIYgFcvWUXheDhT--cBALsfy1I4utOyF
```

- FFMPeg+Qemu [3]: 

```bash
https://drive.google.com/file/d/1x6hoF7G-tSYxg8AFybggypLZgMGDNHfF
```

- Our self-collected dataset:

```bash
https://drive.google.com/file/d/1x6hoF7G-tSYxg8AFybggypLZgMGDNHfF
```

**References**：

[1] Jiahao Fan, Yi Li, Shaohua Wang, and Tien Nguyen. 2020. A C/C++ Code Vulnerability Dataset with Code Changes and CVE Summaries. In The 2020 International Conference on Mining Software Repositories (MSR). IEEE.

[2] Saikat Chakraborty, Rahul Krishna, Yangruibo Ding, and Baishakhi Ray. 2020. Deep Learning based Vulnerability Detection: Are We There Yet? arXiv preprint arXiv:2009.07235 (2020).

[3] Yaqin Zhou, Shangqing Liu, Jingkai Siow, Xiaoning Du, and Yang Liu. 2019. Devign: Effective vulnerability identification by learning comprehensive program semantics via graph neural networks. In Advances in Neural Information Processing Systems. 10197–10207.
