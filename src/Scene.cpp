#include "Scene.h"

#include "ShaderEyelight.h"
#include "ShaderPhong.h"


void CScene::ParseOBJ(const std::string& fileName)
{
	std::cout << "Parsing OBJFile : " << fileName << std::endl;

	std::shared_ptr<IShader> pShader = std::make_shared<CShaderEyelight>();
	// --- PUT YOUR CODE HERE ---

	std::cout << "Finished Parsing" << std::endl;
}

