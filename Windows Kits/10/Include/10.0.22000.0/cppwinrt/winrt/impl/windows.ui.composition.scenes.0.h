// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Scenes_0_H
#define WINRT_Windows_UI_Composition_Scenes_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct MemoryBuffer;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX
{
    enum class DirectXPixelFormat : int32_t;
    enum class DirectXPrimitiveTopology : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition
{
    enum class CompositionBitmapInterpolationMode : int32_t;
    struct Compositor;
    struct ICompositionSurface;
}
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Scenes
{
    enum class SceneAlphaMode : int32_t
    {
        Opaque = 0,
        AlphaTest = 1,
        Blend = 2,
    };
    enum class SceneAttributeSemantic : int32_t
    {
        Index = 0,
        Vertex = 1,
        Normal = 2,
        TexCoord0 = 3,
        TexCoord1 = 4,
        Color = 5,
        Tangent = 6,
    };
    enum class SceneComponentType : int32_t
    {
        MeshRendererComponent = 0,
    };
    enum class SceneWrappingMode : int32_t
    {
        ClampToEdge = 0,
        MirroredRepeat = 1,
        Repeat = 2,
    };
    struct ISceneBoundingBox;
    struct ISceneComponent;
    struct ISceneComponentCollection;
    struct ISceneComponentFactory;
    struct ISceneMaterial;
    struct ISceneMaterialFactory;
    struct ISceneMaterialInput;
    struct ISceneMaterialInputFactory;
    struct ISceneMesh;
    struct ISceneMeshMaterialAttributeMap;
    struct ISceneMeshRendererComponent;
    struct ISceneMeshRendererComponentStatics;
    struct ISceneMeshStatics;
    struct ISceneMetallicRoughnessMaterial;
    struct ISceneMetallicRoughnessMaterialStatics;
    struct ISceneModelTransform;
    struct ISceneNode;
    struct ISceneNodeCollection;
    struct ISceneNodeStatics;
    struct ISceneObject;
    struct ISceneObjectFactory;
    struct IScenePbrMaterial;
    struct IScenePbrMaterialFactory;
    struct ISceneRendererComponent;
    struct ISceneRendererComponentFactory;
    struct ISceneSurfaceMaterialInput;
    struct ISceneSurfaceMaterialInputStatics;
    struct ISceneVisual;
    struct ISceneVisualStatics;
    struct SceneBoundingBox;
    struct SceneComponent;
    struct SceneComponentCollection;
    struct SceneMaterial;
    struct SceneMaterialInput;
    struct SceneMesh;
    struct SceneMeshMaterialAttributeMap;
    struct SceneMeshRendererComponent;
    struct SceneMetallicRoughnessMaterial;
    struct SceneModelTransform;
    struct SceneNode;
    struct SceneNodeCollection;
    struct SceneObject;
    struct ScenePbrMaterial;
    struct SceneRendererComponent;
    struct SceneSurfaceMaterialInput;
    struct SceneVisual;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Composition::Scenes::ISceneBoundingBox>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneComponent>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneComponentCollection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneComponentFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMaterial>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMaterialFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMaterialInput>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMaterialInputFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMesh>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMeshRendererComponentStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMeshStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterialStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneModelTransform>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneNode>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneNodeCollection>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneNodeStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneObject>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneObjectFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::IScenePbrMaterial>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::IScenePbrMaterialFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneRendererComponent>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneRendererComponentFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneVisual>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ISceneVisualStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneBoundingBox>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneComponent>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneComponentCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMaterial>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMaterialInput>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMesh>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMeshRendererComponent>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneModelTransform>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneNode>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneNodeCollection>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneObject>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::ScenePbrMaterial>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneRendererComponent>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneVisual>{ using type = class_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneAlphaMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneAttributeSemantic>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneComponentType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Composition::Scenes::SceneWrappingMode>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneBoundingBox> = L"Windows.UI.Composition.Scenes.SceneBoundingBox";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneComponent> = L"Windows.UI.Composition.Scenes.SceneComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneComponentCollection> = L"Windows.UI.Composition.Scenes.SceneComponentCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMaterial> = L"Windows.UI.Composition.Scenes.SceneMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMaterialInput> = L"Windows.UI.Composition.Scenes.SceneMaterialInput";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMesh> = L"Windows.UI.Composition.Scenes.SceneMesh";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap> = L"Windows.UI.Composition.Scenes.SceneMeshMaterialAttributeMap";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMeshRendererComponent> = L"Windows.UI.Composition.Scenes.SceneMeshRendererComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial> = L"Windows.UI.Composition.Scenes.SceneMetallicRoughnessMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneModelTransform> = L"Windows.UI.Composition.Scenes.SceneModelTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneNode> = L"Windows.UI.Composition.Scenes.SceneNode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneNodeCollection> = L"Windows.UI.Composition.Scenes.SceneNodeCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneObject> = L"Windows.UI.Composition.Scenes.SceneObject";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ScenePbrMaterial> = L"Windows.UI.Composition.Scenes.ScenePbrMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneRendererComponent> = L"Windows.UI.Composition.Scenes.SceneRendererComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput> = L"Windows.UI.Composition.Scenes.SceneSurfaceMaterialInput";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneVisual> = L"Windows.UI.Composition.Scenes.SceneVisual";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneAlphaMode> = L"Windows.UI.Composition.Scenes.SceneAlphaMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneAttributeSemantic> = L"Windows.UI.Composition.Scenes.SceneAttributeSemantic";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneComponentType> = L"Windows.UI.Composition.Scenes.SceneComponentType";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::SceneWrappingMode> = L"Windows.UI.Composition.Scenes.SceneWrappingMode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneBoundingBox> = L"Windows.UI.Composition.Scenes.ISceneBoundingBox";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneComponent> = L"Windows.UI.Composition.Scenes.ISceneComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneComponentCollection> = L"Windows.UI.Composition.Scenes.ISceneComponentCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneComponentFactory> = L"Windows.UI.Composition.Scenes.ISceneComponentFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMaterial> = L"Windows.UI.Composition.Scenes.ISceneMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMaterialFactory> = L"Windows.UI.Composition.Scenes.ISceneMaterialFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMaterialInput> = L"Windows.UI.Composition.Scenes.ISceneMaterialInput";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMaterialInputFactory> = L"Windows.UI.Composition.Scenes.ISceneMaterialInputFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMesh> = L"Windows.UI.Composition.Scenes.ISceneMesh";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap> = L"Windows.UI.Composition.Scenes.ISceneMeshMaterialAttributeMap";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMeshRendererComponent> = L"Windows.UI.Composition.Scenes.ISceneMeshRendererComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMeshRendererComponentStatics> = L"Windows.UI.Composition.Scenes.ISceneMeshRendererComponentStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMeshStatics> = L"Windows.UI.Composition.Scenes.ISceneMeshStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial> = L"Windows.UI.Composition.Scenes.ISceneMetallicRoughnessMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterialStatics> = L"Windows.UI.Composition.Scenes.ISceneMetallicRoughnessMaterialStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneModelTransform> = L"Windows.UI.Composition.Scenes.ISceneModelTransform";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneNode> = L"Windows.UI.Composition.Scenes.ISceneNode";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneNodeCollection> = L"Windows.UI.Composition.Scenes.ISceneNodeCollection";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneNodeStatics> = L"Windows.UI.Composition.Scenes.ISceneNodeStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneObject> = L"Windows.UI.Composition.Scenes.ISceneObject";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneObjectFactory> = L"Windows.UI.Composition.Scenes.ISceneObjectFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::IScenePbrMaterial> = L"Windows.UI.Composition.Scenes.IScenePbrMaterial";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::IScenePbrMaterialFactory> = L"Windows.UI.Composition.Scenes.IScenePbrMaterialFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneRendererComponent> = L"Windows.UI.Composition.Scenes.ISceneRendererComponent";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneRendererComponentFactory> = L"Windows.UI.Composition.Scenes.ISceneRendererComponentFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput> = L"Windows.UI.Composition.Scenes.ISceneSurfaceMaterialInput";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics> = L"Windows.UI.Composition.Scenes.ISceneSurfaceMaterialInputStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneVisual> = L"Windows.UI.Composition.Scenes.ISceneVisual";
    template <> inline constexpr auto& name_v<Windows::UI::Composition::Scenes::ISceneVisualStatics> = L"Windows.UI.Composition.Scenes.ISceneVisualStatics";
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneBoundingBox>{ 0x5D8FFC70,0xC618,0x4083,{ 0x82,0x51,0x99,0x62,0x59,0x31,0x14,0xAA } }; // 5D8FFC70-C618-4083-8251-9962593114AA
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneComponent>{ 0xAE20FC96,0x226C,0x44BD,{ 0x95,0xCB,0xDD,0x5E,0xD9,0xEB,0xE9,0xA5 } }; // AE20FC96-226C-44BD-95CB-DD5ED9EBE9A5
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneComponentCollection>{ 0xC483791C,0x5F46,0x45E4,{ 0xB6,0x66,0xA3,0xD2,0x25,0x9F,0x9B,0x2E } }; // C483791C-5F46-45E4-B666-A3D2259F9B2E
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneComponentFactory>{ 0x5FBC5574,0xDDD8,0x5889,{ 0xAB,0x5B,0xD8,0xFA,0x71,0x6E,0x7C,0x9E } }; // 5FBC5574-DDD8-5889-AB5B-D8FA716E7C9E
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMaterial>{ 0x8CA74B7C,0x30DF,0x4E07,{ 0x94,0x90,0x37,0x87,0x5A,0xF1,0xA1,0x23 } }; // 8CA74B7C-30DF-4E07-9490-37875AF1A123
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMaterialFactory>{ 0x67536C19,0xA707,0x5254,{ 0xA4,0x95,0x7F,0xDC,0x79,0x98,0x93,0xB9 } }; // 67536C19-A707-5254-A495-7FDC799893B9
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMaterialInput>{ 0x422A1642,0x1EF1,0x485C,{ 0x97,0xE9,0xAE,0x6F,0x95,0xAD,0x81,0x2F } }; // 422A1642-1EF1-485C-97E9-AE6F95AD812F
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMaterialInputFactory>{ 0xA88FEB74,0x7D0A,0x5E4C,{ 0xA7,0x48,0x10,0x15,0xAF,0x9C,0xA7,0x4F } }; // A88FEB74-7D0A-5E4C-A748-1015AF9CA74F
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMesh>{ 0xEE9A1530,0x1155,0x4C0C,{ 0x92,0xBD,0x40,0x02,0x0C,0xF7,0x83,0x47 } }; // EE9A1530-1155-4C0C-92BD-40020CF78347
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap>{ 0xCE843171,0x3D43,0x4855,{ 0xAA,0x69,0x31,0xFF,0x98,0x8D,0x04,0x9D } }; // CE843171-3D43-4855-AA69-31FF988D049D
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>{ 0x9929F7E3,0x6364,0x477E,{ 0x98,0xFE,0x74,0xED,0x9F,0xD4,0xC2,0xDE } }; // 9929F7E3-6364-477E-98FE-74ED9FD4C2DE
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMeshRendererComponentStatics>{ 0x4954F37A,0x4459,0x4521,{ 0xBD,0x6E,0x2B,0x38,0xB8,0xD7,0x11,0xEA } }; // 4954F37A-4459-4521-BD6E-2B38B8D711EA
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMeshStatics>{ 0x8412316C,0x7B57,0x473F,{ 0x96,0x6B,0x81,0xDC,0x27,0x7B,0x17,0x51 } }; // 8412316C-7B57-473F-966B-81DC277B1751
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial>{ 0xC1D91446,0x799C,0x429E,{ 0xA4,0xE4,0x5D,0xA6,0x45,0xF1,0x8E,0x61 } }; // C1D91446-799C-429E-A4E4-5DA645F18E61
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterialStatics>{ 0x3BDDCA50,0x6D9D,0x4531,{ 0x8D,0xC4,0xB2,0x7E,0x3E,0x49,0xB7,0xAB } }; // 3BDDCA50-6D9D-4531-8DC4-B27E3E49B7AB
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneModelTransform>{ 0xC05576C2,0x32B1,0x4269,{ 0x98,0x0D,0xB9,0x85,0x37,0x10,0x0A,0xE4 } }; // C05576C2-32B1-4269-980D-B98537100AE4
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneNode>{ 0xACF2C247,0xF307,0x4581,{ 0x9C,0x41,0xAF,0x2E,0x29,0xC3,0xB0,0x16 } }; // ACF2C247-F307-4581-9C41-AF2E29C3B016
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneNodeCollection>{ 0x29ADA101,0x2DD9,0x4332,{ 0xBE,0x63,0x60,0xD2,0xCF,0x42,0x69,0xF2 } }; // 29ADA101-2DD9-4332-BE63-60D2CF4269F2
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneNodeStatics>{ 0x579A0FAA,0xBE9D,0x4210,{ 0x90,0x8C,0x93,0xD1,0x5F,0xEE,0xD0,0xB7 } }; // 579A0FAA-BE9D-4210-908C-93D15FEED0B7
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneObject>{ 0x1E94249B,0x0F1B,0x49EB,{ 0xA8,0x19,0x87,0x7D,0x84,0x50,0x00,0x5B } }; // 1E94249B-0F1B-49EB-A819-877D8450005B
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneObjectFactory>{ 0x14FE799A,0x33E4,0x52EF,{ 0x95,0x6C,0x44,0x22,0x9D,0x21,0xF2,0xC1 } }; // 14FE799A-33E4-52EF-956C-44229D21F2C1
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::IScenePbrMaterial>{ 0xAAB6EBBE,0xD680,0x46DF,{ 0x82,0x94,0xB6,0x80,0x0A,0x9F,0x95,0xE7 } }; // AAB6EBBE-D680-46DF-8294-B6800A9F95E7
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::IScenePbrMaterialFactory>{ 0x2E3F3DFE,0x0B85,0x5727,{ 0xB5,0xBE,0xB7,0xD3,0xCB,0xAC,0x37,0xFA } }; // 2E3F3DFE-0B85-5727-B5BE-B7D3CBAC37FA
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneRendererComponent>{ 0xF1ACB857,0xCF4F,0x4025,{ 0x9B,0x25,0xA2,0xD1,0x94,0x4C,0xF5,0x07 } }; // F1ACB857-CF4F-4025-9B25-A2D1944CF507
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneRendererComponentFactory>{ 0x1DB6ED6C,0xAA2C,0x5967,{ 0x90,0x35,0x56,0x35,0x2D,0xC6,0x96,0x58 } }; // 1DB6ED6C-AA2C-5967-9035-56352DC69658
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput>{ 0x9937DA5C,0xA9CA,0x4CFC,{ 0xB3,0xAA,0x08,0x83,0x56,0x51,0x87,0x42 } }; // 9937DA5C-A9CA-4CFC-B3AA-088356518742
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>{ 0x5A2394D3,0x6429,0x4589,{ 0xBB,0xCF,0xB8,0x4F,0x4F,0x3C,0xFB,0xFE } }; // 5A2394D3-6429-4589-BBCF-B84F4F3CFBFE
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneVisual>{ 0x8E672C1E,0xD734,0x47B1,{ 0xBE,0x14,0x3D,0x69,0x4F,0xFA,0x43,0x01 } }; // 8E672C1E-D734-47B1-BE14-3D694FFA4301
    template <> inline constexpr guid guid_v<Windows::UI::Composition::Scenes::ISceneVisualStatics>{ 0xB8347E9A,0x50AA,0x4527,{ 0x8D,0x34,0xDE,0x4C,0xB8,0xEA,0x88,0xB4 } }; // B8347E9A-50AA-4527-8D34-DE4CB8EA88B4
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneBoundingBox>{ using type = Windows::UI::Composition::Scenes::ISceneBoundingBox; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneComponent>{ using type = Windows::UI::Composition::Scenes::ISceneComponent; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneComponentCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent>; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMaterial>{ using type = Windows::UI::Composition::Scenes::ISceneMaterial; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMaterialInput>{ using type = Windows::UI::Composition::Scenes::ISceneMaterialInput; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMesh>{ using type = Windows::UI::Composition::Scenes::ISceneMesh; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap>{ using type = Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMeshRendererComponent>{ using type = Windows::UI::Composition::Scenes::ISceneMeshRendererComponent; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial>{ using type = Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneModelTransform>{ using type = Windows::UI::Composition::Scenes::ISceneModelTransform; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneNode>{ using type = Windows::UI::Composition::Scenes::ISceneNode; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneNodeCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneNode>; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneObject>{ using type = Windows::UI::Composition::Scenes::ISceneObject; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::ScenePbrMaterial>{ using type = Windows::UI::Composition::Scenes::IScenePbrMaterial; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneRendererComponent>{ using type = Windows::UI::Composition::Scenes::ISceneRendererComponent; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput>{ using type = Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput; };
    template <> struct default_interface<Windows::UI::Composition::Scenes::SceneVisual>{ using type = Windows::UI::Composition::Scenes::ISceneVisual; };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneBoundingBox>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Extents(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Max(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Min(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_Size(Windows::Foundation::Numerics::float3*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneComponent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ComponentType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneComponentCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneComponentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMaterialFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMaterialInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMaterialInputFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMesh>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Bounds(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimitiveTopology(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PrimitiveTopology(int32_t) noexcept = 0;
            virtual int32_t __stdcall FillMeshAttribute(int32_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Material(void**) noexcept = 0;
            virtual int32_t __stdcall put_Material(void*) noexcept = 0;
            virtual int32_t __stdcall get_Mesh(void**) noexcept = 0;
            virtual int32_t __stdcall put_Mesh(void*) noexcept = 0;
            virtual int32_t __stdcall get_UVMappings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMeshRendererComponentStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMeshStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BaseColorInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_BaseColorInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_BaseColorFactor(Windows::Foundation::Numerics::float4*) noexcept = 0;
            virtual int32_t __stdcall put_BaseColorFactor(Windows::Foundation::Numerics::float4) noexcept = 0;
            virtual int32_t __stdcall get_MetallicFactor(float*) noexcept = 0;
            virtual int32_t __stdcall put_MetallicFactor(float) noexcept = 0;
            virtual int32_t __stdcall get_MetallicRoughnessInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_MetallicRoughnessInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_RoughnessFactor(float*) noexcept = 0;
            virtual int32_t __stdcall put_RoughnessFactor(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterialStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneModelTransform>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngle(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngle(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAngleInDegrees(float*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAngleInDegrees(float) noexcept = 0;
            virtual int32_t __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_Translation(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Translation(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneNode>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_Components(void**) noexcept = 0;
            virtual int32_t __stdcall get_Parent(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transform(void**) noexcept = 0;
            virtual int32_t __stdcall FindFirstComponentOfType(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneNodeCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneNodeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneObjectFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::IScenePbrMaterial>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AlphaCutoff(float*) noexcept = 0;
            virtual int32_t __stdcall put_AlphaCutoff(float) noexcept = 0;
            virtual int32_t __stdcall get_AlphaMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_AlphaMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_EmissiveInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_EmissiveInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_EmissiveFactor(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_EmissiveFactor(Windows::Foundation::Numerics::float3) noexcept = 0;
            virtual int32_t __stdcall get_IsDoubleSided(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsDoubleSided(bool) noexcept = 0;
            virtual int32_t __stdcall get_NormalInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_NormalInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalScale(float*) noexcept = 0;
            virtual int32_t __stdcall put_NormalScale(float) noexcept = 0;
            virtual int32_t __stdcall get_OcclusionInput(void**) noexcept = 0;
            virtual int32_t __stdcall put_OcclusionInput(void*) noexcept = 0;
            virtual int32_t __stdcall get_OcclusionStrength(float*) noexcept = 0;
            virtual int32_t __stdcall put_OcclusionStrength(float) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::IScenePbrMaterialFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneRendererComponent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneRendererComponentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BitmapInterpolationMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_BitmapInterpolationMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Surface(void**) noexcept = 0;
            virtual int32_t __stdcall put_Surface(void*) noexcept = 0;
            virtual int32_t __stdcall get_WrappingUMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WrappingUMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_WrappingVMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WrappingVMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneVisual>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Root(void**) noexcept = 0;
            virtual int32_t __stdcall put_Root(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Composition::Scenes::ISceneVisualStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneBoundingBox
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Center() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Extents() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Max() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Min() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Size() const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneBoundingBox>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneBoundingBox<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneComponent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneComponentType) ComponentType() const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneComponent>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneComponent<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneComponentCollection
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneComponentCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneComponentCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneComponentFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneComponentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneComponentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMaterial
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMaterial>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMaterialFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMaterialFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMaterialFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMaterialInput
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMaterialInput>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMaterialInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMaterialInputFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMaterialInputFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMaterialInputFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMesh
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneBoundingBox) Bounds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::DirectX::DirectXPrimitiveTopology) PrimitiveTopology() const;
        WINRT_IMPL_AUTO(void) PrimitiveTopology(Windows::Graphics::DirectX::DirectXPrimitiveTopology const& value) const;
        WINRT_IMPL_AUTO(void) FillMeshAttribute(Windows::UI::Composition::Scenes::SceneAttributeSemantic const& semantic, Windows::Graphics::DirectX::DirectXPixelFormat const& format, Windows::Foundation::MemoryBuffer const& memory) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMesh>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMesh<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMeshMaterialAttributeMap
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMeshMaterialAttributeMap<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMeshRendererComponent
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterial) Material() const;
        WINRT_IMPL_AUTO(void) Material(Windows::UI::Composition::Scenes::SceneMaterial const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMesh) Mesh() const;
        WINRT_IMPL_AUTO(void) Mesh(Windows::UI::Composition::Scenes::SceneMesh const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap) UVMappings() const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMeshRendererComponent>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMeshRendererComponent<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMeshRendererComponentStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMeshRendererComponent) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMeshRendererComponentStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMeshRendererComponentStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMeshStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMesh) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMeshStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMeshStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterialInput) BaseColorInput() const;
        WINRT_IMPL_AUTO(void) BaseColorInput(Windows::UI::Composition::Scenes::SceneMaterialInput const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float4) BaseColorFactor() const;
        WINRT_IMPL_AUTO(void) BaseColorFactor(Windows::Foundation::Numerics::float4 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) MetallicFactor() const;
        WINRT_IMPL_AUTO(void) MetallicFactor(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterialInput) MetallicRoughnessInput() const;
        WINRT_IMPL_AUTO(void) MetallicRoughnessInput(Windows::UI::Composition::Scenes::SceneMaterialInput const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RoughnessFactor() const;
        WINRT_IMPL_AUTO(void) RoughnessFactor(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterialStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneMetallicRoughnessMaterialStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneMetallicRoughnessMaterialStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneModelTransform
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::quaternion) Orientation() const;
        WINRT_IMPL_AUTO(void) Orientation(Windows::Foundation::Numerics::quaternion const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RotationAngle() const;
        WINRT_IMPL_AUTO(void) RotationAngle(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) RotationAngleInDegrees() const;
        WINRT_IMPL_AUTO(void) RotationAngleInDegrees(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) RotationAxis() const;
        WINRT_IMPL_AUTO(void) RotationAxis(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Scale() const;
        WINRT_IMPL_AUTO(void) Scale(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Translation() const;
        WINRT_IMPL_AUTO(void) Translation(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneModelTransform>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneModelTransform<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneNode
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneNodeCollection) Children() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneComponentCollection) Components() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneNode) Parent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneModelTransform) Transform() const;
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneComponent) FindFirstComponentOfType(Windows::UI::Composition::Scenes::SceneComponentType const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneNode>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneNode<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneNodeCollection
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneNodeCollection>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneNodeCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneNodeStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneNode) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneNodeStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneNodeStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneObject
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneObject>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneObject<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneObjectFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneObjectFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneObjectFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_IScenePbrMaterial
    {
        [[nodiscard]] WINRT_IMPL_AUTO(float) AlphaCutoff() const;
        WINRT_IMPL_AUTO(void) AlphaCutoff(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneAlphaMode) AlphaMode() const;
        WINRT_IMPL_AUTO(void) AlphaMode(Windows::UI::Composition::Scenes::SceneAlphaMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterialInput) EmissiveInput() const;
        WINRT_IMPL_AUTO(void) EmissiveInput(Windows::UI::Composition::Scenes::SceneMaterialInput const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) EmissiveFactor() const;
        WINRT_IMPL_AUTO(void) EmissiveFactor(Windows::Foundation::Numerics::float3 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDoubleSided() const;
        WINRT_IMPL_AUTO(void) IsDoubleSided(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterialInput) NormalInput() const;
        WINRT_IMPL_AUTO(void) NormalInput(Windows::UI::Composition::Scenes::SceneMaterialInput const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) NormalScale() const;
        WINRT_IMPL_AUTO(void) NormalScale(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneMaterialInput) OcclusionInput() const;
        WINRT_IMPL_AUTO(void) OcclusionInput(Windows::UI::Composition::Scenes::SceneMaterialInput const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) OcclusionStrength() const;
        WINRT_IMPL_AUTO(void) OcclusionStrength(float value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::IScenePbrMaterial>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_IScenePbrMaterial<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_IScenePbrMaterialFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::IScenePbrMaterialFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_IScenePbrMaterialFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneRendererComponent
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneRendererComponent>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneRendererComponent<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneRendererComponentFactory
    {
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneRendererComponentFactory>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneRendererComponentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInput
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::CompositionBitmapInterpolationMode) BitmapInterpolationMode() const;
        WINRT_IMPL_AUTO(void) BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::ICompositionSurface) Surface() const;
        WINRT_IMPL_AUTO(void) Surface(Windows::UI::Composition::ICompositionSurface const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneWrappingMode) WrappingUMode() const;
        WINRT_IMPL_AUTO(void) WrappingUMode(Windows::UI::Composition::Scenes::SceneWrappingMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneWrappingMode) WrappingVMode() const;
        WINRT_IMPL_AUTO(void) WrappingVMode(Windows::UI::Composition::Scenes::SceneWrappingMode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInput>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInput<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInputStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneSurfaceMaterialInputStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneSurfaceMaterialInputStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneVisual
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneNode) Root() const;
        WINRT_IMPL_AUTO(void) Root(Windows::UI::Composition::Scenes::SceneNode const& value) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneVisual>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneVisual<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Composition_Scenes_ISceneVisualStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Composition::Scenes::SceneVisual) Create(Windows::UI::Composition::Compositor const& compositor) const;
    };
    template <> struct consume<Windows::UI::Composition::Scenes::ISceneVisualStatics>
    {
        template <typename D> using type = consume_Windows_UI_Composition_Scenes_ISceneVisualStatics<D>;
    };
}
#endif
