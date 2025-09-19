#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
    _id = id;
}

void GraphEdge::SetChildNode(GraphNode *childNode)
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
    _childNode = childNode;
}

void GraphEdge::SetParentNode(GraphNode *parentNode)
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
    _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token)
{
    std::cout << __PRETTY_FUNCTION__  << std::endl;
    _keywords.push_back(token);
}
