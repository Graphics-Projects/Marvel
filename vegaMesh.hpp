#pragma once

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "vegaVAO.hpp"
#include "vegaVBO.hpp"
#include "vegaEBO.hpp"
#include "vegaTexture.hpp"
#include "vegaShaderClass.hpp"
#include "vegaVertex.hpp"
#include "vegaCamera.hpp"
#include "vegaTransform.hpp"

#include <vector>

namespace vega {
    class VEGAMesh {
        private:
            std::vector <VEGAVertex> vertices;
            std::vector <unsigned int> indices;
            std::vector <VEGATexture> textures;

            VEGAVertexArray* vao;
            VEGAVertexBuffer* vbo;
            VEGAIndexBuffer* ibo;
            
        public:
            VEGAMesh(std::vector <VEGAVertex>& vertices, std::vector <unsigned int>& indices, std::vector <VEGATexture>& textures);
            ~VEGAMesh();

            VEGATransform transform;

            void render(VEGAShader& shader, VEGACamera& camera, glm::mat4 matrix = glm::mat4(1.0f));
            void destroy();
    };
}