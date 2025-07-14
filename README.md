# VTE-HoloLens2

**Unity 混合现实项目 | HoloLens 2 端**

> ⚠️ **Git 大文件提醒**  
> 仓库首次推送时，GitHub 检测到 `Library/ArtifactDB`（64 MB）超过官方推荐的 50 MB 上限，给出警告。  
> 如需跟踪更大文件（> 100 MB），请启用 [Git LFS](https://git-lfs.github.com)。

---

## 📌 项目简介
基于 **Unity 2021 LTS** 与 **MRTK 3** 的 HoloLens 2 混合现实应用，用于VTE康复训练。

---

## 🚀 快速开始

| 步骤 | 命令 / 操作 |
|---|---|
| 1. 克隆仓库 | `git clone https://github.com/Liu-302/VTE-HoloLens2.git` |
| 2. 打开 Unity | 用 **Unity Hub** 打开 `VTE-HoloLens2` 文件夹 |
| 3. 切换平台 | **File → Build Settings → UWP** |
| 4. 构建 | **Build → 选择 `Builds\UWP` 目录** |
| 5. 部署 | 用 **Visual Studio 2022** 打开生成的 `.sln`，选择 **Release ARM64 + Device** 部署到 HoloLens 2 |

---

## 🛠️ 技术栈
- **Unity 2021.3 LTS**
- **MRTK 3**
- **OpenXR Plugin**
- **UWP ARM64**
- **.NET Standard 2.1**

---

## 📁 关键目录
```
VTE-HoloLens2/
├── Assets/                 # 场景、脚本、资源
├── Packages/               # 依赖包
├── ProjectSettings/        # Unity 项目设置
├── Builds/                 # UWP 构建输出
└── README.md               # 本文档
```

---

## 📄 许可证
MIT © 2024 Liu-302