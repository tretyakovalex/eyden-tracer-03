#pragma once

#include "BSPNode.h"
#include "BoundingBox.h"

namespace {
	// Calculates and return the bounding box, containing the whole scene
	CBoundingBox calcBoundingBox(const std::vector<ptr_prim_t>& vpPrims)
	{
		CBoundingBox res;
		for (auto pPrim : vpPrims)
			res.extend(pPrim->getBoundingBox());
		return res;
	}

	// Returns the best dimension index for next split
	int MaxDim(const Vec3f& v)
	{
		return (v.val[0] > v.val[1]) ? ((v.val[0] > v.val[2]) ? 0 : 2) : ((v.val[1] > v.val[2]) ? 1 : 2);
	}
}

// ================================ BSP Tree Class ================================
/**
 * @brief Binary Space Partitioning (BSP) tree class
 */
class CBSPTree
{
public:
	CBSPTree(void) = default;
	CBSPTree(const CBSPTree&) = delete;
	~CBSPTree(void) = default;
	const CBSPTree& operator=(const CBSPTree&) = delete;
	
	/**
	 * @brief Builds the BSP tree for the primitives provided via \b vpPrims
	 * @param vpPrims The vector of pointers to the primitives in the scene
	 * @param maxDepth The maximum allowed depth of the tree.
	 * Increasing the depth of the tree may speed-up rendering, but increse the memory consumption.
	 * @param minPrimitives The minimum number of primitives in a leaf-node.
	 * This parameters should be alway above 1.
	 */
	void build(const std::vector<ptr_prim_t>& vpPrims, size_t maxDepth = 20, size_t minPrimitives = 3) {
		m_treeBoundingBox = calcBoundingBox(vpPrims);
		m_maxDepth = maxDepth;
		m_minPrimitives = minPrimitives;
		std::cout << "Scene bounds are : " << m_treeBoundingBox << std::endl;
		m_root = build(m_treeBoundingBox, vpPrims, 0);
	}
	/**
	 * @brief Checks whether the ray \b ray intersects a primitive.
	 * @details If ray \b ray intersects a primitive, the \b ray.t value will be updated
	 * @param[in,out] ray The ray
	 */
	bool intersect(Ray& ray) const
	{
		// --- PUT YOUR CODE HERE ---
		return false;
	}


private:
	/**
	 * @brief Builds the BSP tree
	 * @details This function builds the BSP tree recursively
	 * @param box The bounding box containing all the scene primitives
	 * @param vpPrims The vector of pointers to the primitives included in the bounding box \b box
	 * @param depth The distance from the root node of the tree
	 */
	std::shared_ptr<CBSPNode> build(const CBoundingBox& box, const std::vector<ptr_prim_t>& vpPrims, size_t depth)
	{
		float splitVal;
		int splitDim;
		std::shared_ptr<CBSPNode> pLeft;
		std::shared_ptr<CBSPNode> pRight;
		// --- PUT YOUR CODE HERE ---
		return std::make_shared<CBSPNode>(splitDim, splitVal, pLeft, pRight);
	}

	
private:
	CBoundingBox 	m_treeBoundingBox;		///<
	size_t			m_maxDepth;				///< The maximum allowed depth of the tree
	size_t			m_minPrimitives;		///< The minimum number of primitives in a leaf-node
	ptr_bspnode_t   m_root = nullptr;		///<
};
	
