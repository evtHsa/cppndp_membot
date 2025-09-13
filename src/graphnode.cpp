#include "graphedge.h"
#include "graphnode.h"

GraphNode::GraphNode(int id)
{
    _id = id;
}

GraphNode::~GraphNode()
{
    //// STUDENT CODE
    ////

    //delete _chatBot;  /* FIXME: see if not calling dtor 2nd time is temp fix b4 RuleOf5 */

    ////
    //// EOF STUDENT CODE
}

void GraphNode::AddToken(std::string token)
{
    _answers.push_back(token);
}

void GraphNode::AddEdgeToParentNode(GraphEdge *edge)
{
  std::shared_ptr<GraphEdge> sp_edge(edge);
  _parentEdges.push_back(sp_edge);
}

void GraphNode::AddEdgeToChildNode(GraphEdge *edge)
{
  std::unique_ptr<GraphEdge> up_edge(edge);
  _childEdges.push_back(std::move(up_edge));
}

//// STUDENT CODE
////
void GraphNode::MoveChatbotHere(ChatBot *chatbot)
{
    _chatBot = chatbot;
    _chatBot->SetCurrentNode(this);
}

void GraphNode::MoveChatbotToNewNode(GraphNode *newNode)
{
    newNode->MoveChatbotHere(_chatBot);
    _chatBot = nullptr; // invalidate pointer at source
}
////
//// EOF STUDENT CODE

GraphEdge *GraphNode::GetChildEdgeAtIndex(int index)
{
    //// STUDENT CODE
    ////

  return _childEdges[index].get();

    ////
    //// EOF STUDENT CODE
}
