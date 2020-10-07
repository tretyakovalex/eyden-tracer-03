#pragma once

#include "types.h"

struct Ray;

namespace {
	inline Vec3f Min3f(const Vec3f a, const Vec3f b)
	{
		return Vec3f(MIN(a.val[0], b.val[0]), MIN(a.val[1], b.val[1]), MIN(a.val[2], b.val[2]));
	}

	inline Vec3f Max3f(const Vec3f a, const Vec3f b)
	{
		return Vec3f(MAX(a.val[0], b.val[0]), MAX(a.val[1], b.val[1]), MAX(a.val[2], b.val[2]));
	}
}

// ================================ AABB Class ================================
/**
 * @brief Axis-Aligned Bounding Box (AABB) class
 * @author Sergey G. Kosov, sergey.kosov@project-10.de
 */
class CBoundingBox
{
public:
	/**
	 * @brief Constructor
	 * @param minPoint The minimal point defying the size of the bounding box
	 * @param maxPoint The maximal point defying the size of the bounding box
	 */
	CBoundingBox(const Vec3f& minPoint = Vec3f::all(Infty), const Vec3f& maxPoint = Vec3f::all(-Infty))
		: m_minPoint(minPoint)
		, m_maxPoint(maxPoint)
	{}
	~CBoundingBox(void) = default;
	friend std::ostream& operator<<(std::ostream& os, const CBoundingBox& box) {
		os << box.m_minPoint << " " << box.m_maxPoint;
		return os;
	}

	/**
	 * @brief Extends the bounding box to contain point \b p
	 * @param p A point
	 */
	void extend(const Vec3f& p)
	{
		// --- PUT YOUR CODE HERE ---
	}
	
	/**
	 * @brief Extends the bounding box to contain bounding box \b box
	 * @param box The second bounding box
	 */
	void extend(const CBoundingBox& box)
	{
		// --- PUT YOUR CODE HERE ---
	}
	/**
	 * @brief Splits the bounding box into two parts
	 * @details This function splits the bounding box with a plane orthogonal to the axis \b dim. Two resulting bounding boxes are initialized and returned as the result.
	 * @param dim The dimension in which the bounding box is splitted: 0 is x, 1 is y and 2 is z
	 * @param val The value for the defined dimension where the box is splitted. It must be in range defined my minimal and maximal points of the bounding box
	 * @returns A pair of bounding boxes, as a matter of fact "left" and "right" bounding boxes
	 */
	std::pair<CBoundingBox, CBoundingBox> split(int dim, float val) const
	{
		// --- PUT YOUR CODE HERE ---
		return std::make_pair<CBoundingBox, CBoundingBox>(CBoundingBox(), CBoundingBox());
	}
	/**
	 * @brief Checks if the current bounding box overlaps with the argument bounding box \b box
	 * @param box The secind bounding box to be checked with
	 */
	bool overlaps(const CBoundingBox& box) const
	{
		// --- PUT YOUR CODE HERE ---
		return false;
	}
	
	/**
	 * @brief Clips the ray with the bounding box
	 * @details If ray \b ray does not intersect the bounding box, resulting t1 will be smaller than t0
	 * @note This is actually a ray - aabb intersection algorithm
	 * @param[in] ray The ray
	 * @param[in,out] t0 The distance from ray origin at which the ray enters the bounding box
	 * @param[in,out] t1 The distance from ray origin at which the ray leaves the bounding box
	 */
	void clip(const Ray& ray, double& t0, double& t1) const
	{
		// --- PUT YOUR CODE HERE ---
	}
	
	
public:
	Vec3f m_minPoint;	///< The minimal point defying the size of the bounding box
	Vec3f m_maxPoint;	///< The maximal point defying the size of the bounding box
};
