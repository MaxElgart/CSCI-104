#include "labellist.h"
#include <cassert>

// Complete - Do not alter
LabelList::MsgNode::MsgNode(const MsgType& msg)
    : msg_(msg)
{
    // Every message is part of the "all" (index 0) label
    labelled_.push_back(true);
    next_.push_back(nullptr);
    prev_.push_back(nullptr);
}


// Complete - Do not alter
LabelList::MsgToken::MsgToken()
 : node_(nullptr), list_(nullptr)
{
}

// To be completed - must adhere to any requirements in the .h file
LabelList::MsgToken::MsgToken(MsgNode* node, LabelList* list)
// Add any initializers here
 : node_(node), list_(list)
{

}

// To be completed - must adhere to any requirements in the .h file
bool LabelList::MsgToken::operator==(const MsgToken& rhs) const
{
    if (this->node_ == rhs.node_)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Complete - Do not alter
bool LabelList::MsgToken::operator!=(const MsgToken& rhs) const
{
    return !operator==(rhs);
}

// To be completed - must adhere to any requirements in the .h file
LabelList::MsgToken::operator bool() const
{
    if(this->isValid())
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Complete - Do not alter
bool LabelList::MsgToken::isValid() const
{
    return this->node_ != nullptr;
}

// Complete - Do not alter
LabelList::MsgToken& LabelList::MsgToken::next(const LabelType& label)
{
    size_t index = this->list_->findLabelIndex(label);
    if( false == this->isLabelMember(index) ) 
    {
        throw std::invalid_argument("Node is not part of the given label");
    }
    this->node_ = this->node_->next_[index];

    // Should return reference to self
    return *this;
}

// Complete - Do not alter
LabelList::MsgToken& LabelList::MsgToken::prev(const LabelType& label)
{
    size_t index = this->list_->findLabelIndex(label);
    if( false == this->isLabelMember(index) ) 
    {
        throw std::invalid_argument("Node is not part of the given label");
    }
    this->node_ = this->node_->prev_[index];

    // Should return reference to self
    return *this;
}

// Complete - Do not alter
bool LabelList::MsgToken::isLabelMember(const LabelType& label) const
{
    size_t index = this->list_->findLabelIndex(label);
    return isLabelMember(index);
}

// Complete - Do not alter
bool LabelList::MsgToken::isLabelMember(size_t index) const
{
    return this->isValid() && 
            index != INVALID_LABEL &&
            index < this->node_->labelled_.size() &&
            this->node_->labelled_[index] ;
}

// To be completed - must adhere to any requirements in the .h file
LabelList::MsgType const & LabelList::MsgToken::msg() const
{
    if(this->isValid())
    {
        return this->node_->msg_;
    }
    else
    {
        throw std::logic_error("cannot call message function");
    }
}
// To be completed - must adhere to any requirements in the .h file
LabelList::MsgType& LabelList::MsgToken::msg() 
{
    if(this->isValid())
    {
        return this->node_->msg_;
    }
    else
    {
        throw std::logic_error("cannot call message function");
    }
}

// To be completed - must adhere to any requirements in the .h file (accidentally completed?)
std::ostream& operator<<(std::ostream& ostr, const LabelList::MsgToken& token)
{
    if(token.isValid())
    {
        ostr << token.node_->msg_;
    }
    return ostr;
}

// Static constant 
const LabelList::MsgToken LabelList::end_(nullptr, nullptr);

// To be completed - must adhere to any requirements in the .h file
LabelList::LabelList() 
// Add any initializers here
{
    heads_.push_back(nullptr);
    labels_.push_back("all");
}

// To be completed - must adhere to any requirements in the .h file
LabelList::~LabelList()
{
    clear();
}

// To be completed - must adhere to any requirements in the .h file
void LabelList::clear()
{
    MsgNode* temp = heads_[0];
    while(temp != NULL)
    {
        MsgNode* current;
        current = temp->next_[0];
        delete temp;
        temp = current;
    }
    
}

// To be completed - must adhere to any requirements in the .h file
bool LabelList::empty() const
{
    if (heads_[0] == NULL)
    {
        return true;
    }
    return false;
}

// Complete
size_t LabelList::size() const
{
    MsgNode* n = this->heads_[0];
    size_t cnt = 0;
    while(n != nullptr){
        cnt++;
        n = n->next_[0];
    }
    return cnt;
}

// To be completed - must adhere to any requirements in the .h file
LabelList::MsgToken LabelList::add(const MsgType& msg)
{
    MsgNode* newNode = new MsgNode(msg);
    
    if (heads_[0] == NULL)
    {
        newNode->next_[0] = NULL;
        newNode->msg_ = msg;
        heads_[0] = newNode;
        tail = newNode;
    }
    else
    {
        MsgNode* temp = tail;
        newNode->prev_[0] = temp;
        newNode->next_[0] = NULL;
        temp->next_[0] = newNode;
        tail = newNode;
    }
    return MsgToken(newNode, this);
}


// To be completed - must adhere to any requirements in the .h file
void LabelList::remove(const MsgToken& token)
{
    if(!token.isValid())
    {
        return;
    }
    MsgNode* tokenNode = token.node_;
    MsgNode* temp;
    MsgNode* temp2;
    
    for (int i = 0; i < tokenNode->next_.size(); i++)
    {
        if (tokenNode->prev_[i] == NULL && tokenNode->next_[i] == NULL)
        {
            heads_[i] = nullptr;
        }
        else if(tokenNode->prev_[i] == NULL)
        {
            temp = tokenNode->next_[i];
            temp->prev_[i] = NULL;
            heads_[i] = temp;
        }
        else if(tokenNode->next_[i] == NULL)
        {
            temp = tokenNode->prev_[i];
            temp->next_[i] = NULL;
        }
        else
        {
            temp = tokenNode->prev_[i];
            temp->next_[i] = tokenNode->next_[i];
            temp2 = tokenNode->next_[i];
            temp2->prev_[i] = temp;
        }
    }
    delete tokenNode;
    return;
    
    
}

// To be completed - must adhere to any requirements in the .h file
void LabelList::label(const MsgToken& token, const LabelType& label)
{
    
    if(!token.isValid())
    {
        throw std::invalid_argument("Bad token in label()");
    }
    
    int labelIndex = findLabelIndex(label);
    
    if (labelIndex == INVALID_LABEL)
    {
        heads_.push_back(nullptr);
        labels_.push_back(label);
        labelIndex = labels_.size() - 1;
    }
    
    MsgNode* tokenNode = token.node_;
    
    
    if(labelIndex >= tokenNode->next_.size())
    {
        tokenNode->next_.resize(labelIndex + 1, nullptr);
        tokenNode->prev_.resize(labelIndex + 1, nullptr);
        tokenNode->labelled_.resize(labelIndex + 1, false);
    }
    
    
    if(heads_[labelIndex] == nullptr)
    {
        heads_[labelIndex] = tokenNode;
    }
    else
    {
        MsgNode* temp = tokenNode;
        while(temp != nullptr)
        {
            if (temp->labelled_.size() < labelIndex)
            {
                temp = temp->prev_[0];
                continue;
            }
            if (temp->labelled_[labelIndex] == true)
            {
                tokenNode->prev_[labelIndex] = temp;
                temp->next_[labelIndex] = tokenNode;
                break;
            }
            temp = temp->prev_[0];
        }
        if (temp == nullptr)
        {
            heads_[labelIndex] = tokenNode;
        }
        temp = tokenNode;
        while(temp != nullptr)
        {
            if (temp->labelled_.size() < labelIndex)
            {
                temp = temp->next_[0];
                continue;
            }
            if (temp->labelled_[labelIndex] == true)
            {
                tokenNode->next_[labelIndex] = temp;
                temp->prev_[labelIndex] = tokenNode;
                break;
            }
            temp = temp->next_[0];
        }
        if (temp == nullptr)
        {
            tokenNode->next_[labelIndex] = NULL;
        }
    }
    
    
    
    if (tokenNode->labelled_[labelIndex] == true)
    {
        return;
    }
    else
    {
        tokenNode->labelled_[labelIndex] = true;
        return;
    }
    
}

// To be completed - must adhere to any requirements in the .h file
void LabelList::unlabel(const MsgToken& token, const LabelType& label)
{
    if(!token.isValid())
    {
        throw std::invalid_argument("Bad token in label()");
    }
    
    int labelIndex = findLabelIndex(label);
    
    MsgNode* tokenNode = token.node_;
    
    if (labelIndex == INVALID_LABEL)
    {
        throw std::out_of_range("label provided doesn't exist");
    }
    
    if (labelIndex == 0 || tokenNode->labelled_[labelIndex] == 0)
    {
        return;
    }
    
    MsgNode* temp;
    MsgNode* temp2;
    
    if (tokenNode->labelled_[labelIndex] == 1)
    {
        tokenNode->labelled_[labelIndex] = 0;
        if (tokenNode->prev_[labelIndex] == NULL && tokenNode->next_[labelIndex] == NULL)
        {
            heads_[labelIndex] = nullptr;
        }
        else if(tokenNode->prev_[labelIndex] == NULL)
        {
            temp = tokenNode->next_[labelIndex];
            temp->prev_[labelIndex] = NULL;
            heads_[labelIndex] = temp;
        }
        else if(tokenNode->next_[labelIndex] == NULL)
        {
            temp = tokenNode->prev_[labelIndex];
            temp->next_[labelIndex] = NULL;
        }
        else
        {
            temp = tokenNode->prev_[labelIndex];
            temp->next_[labelIndex] = tokenNode->next_[labelIndex];
            temp2 = tokenNode->next_[labelIndex];
            temp2->prev_[labelIndex] = temp;
        }
        return;
    }
    
}

// Complete - Do not alter
LabelList::MsgToken LabelList::find(const MsgType& msg, const LabelType& label)
{
    // See if the label exists, will throw if not
    size_t level = this->getLabelIndex(label);
    MsgNode* n = this->heads_[level];
    while(n != nullptr)
    {
        if(n->msg_ == msg)
        {
            return MsgToken(n, this);
        }
        n = n->next_[level];
    }
    return end();
}

// To be completed - must adhere to any requirements in the .h file
LabelList::MsgToken LabelList::find(size_t index, const LabelType& label)
{
    
    
    
    
    int labelIndex = findLabelIndex(label);

    if (labelIndex == INVALID_LABEL)
    {
        throw std::out_of_range("Label doesn't exist");
    }
    
    MsgNode* n = heads_[labelIndex];
    
    if (n == NULL)
    {
        return end();
    }
    
    while (index != 0)
    {
        if (n->next_[labelIndex] == nullptr)
        {
            return end();
        }
        n = n->next_[labelIndex];
        index -= 1;
    }
    
    return MsgToken(n, this);
}

// Complete - Do not alter
LabelList::MsgToken const & LabelList::end() const
{
    return end_;
}

// Complete - Do not alter
void LabelList::print(std::ostream& ostr, const LabelType& label, char separator) const
{
    size_t level = this->getLabelIndex(label);
    MsgNode* n = this->heads_[level];
    while(nullptr != n)
    {
        ostr << n->msg_ << separator;
        n = n->next_[level];
    }
    ostr << std::endl;
}

// To be completed - must adhere to any requirements in the .h file
size_t LabelList::findLabelIndex(const LabelType& label) const
{
    for(int i = 0; i < labels_.size(); i++)
    {
        if(labels_[i] == label)
        {
            return i;
        }
    }
    return INVALID_LABEL;
}

// Complete - Do not alter
size_t LabelList::getLabelIndex(const LabelType& label) const
{
    size_t retval = this->findLabelIndex(label);
    if(INVALID_LABEL == retval)
    {
        throw std::out_of_range("Label doesn't exist");
    }
    return retval;
}


