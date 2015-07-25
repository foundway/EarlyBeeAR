#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextureRenderer
struct TextureRenderer_t812;
// UnityEngine.Texture
struct Texture_t58;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C" int32_t TextureRenderer_get_Width_m4586 (TextureRenderer_t812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C" int32_t TextureRenderer_get_Height_m4587 (TextureRenderer_t812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void TextureRenderer__ctor_m4588 (TextureRenderer_t812 * __this, Texture_t58 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t701  ___requestedTextureSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C" RenderTexture_t56 * TextureRenderer_Render_m4589 (TextureRenderer_t812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C" void TextureRenderer_Destroy_m4590 (TextureRenderer_t812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
