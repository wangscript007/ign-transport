/*
 * Copyright (C) 2016 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#include <string>

#include "ignition/transport/MessageInfo.hh"

using namespace ignition;
using namespace transport;

namespace ignition
{
  namespace transport
  {
    /// \internal
    /// \brief Private data for MessageInfo class.
    class MessageInfoPrivate
    {
      /// \brief Default constructor.
      public: MessageInfoPrivate() = default;

      /// \brief Destructor.
      public: virtual ~MessageInfoPrivate() = default;

      /// \brief Topic name.
      public: std::string topic = "";

      /// \brief Message type name.
      public: std::string type = "";

      /// \brief Partition name.
      public: std::string partition = "";
    };
  }
}

//////////////////////////////////////////////////
MessageInfo::MessageInfo()
  : dataPtr(new MessageInfoPrivate())
{
}

//////////////////////////////////////////////////
MessageInfo::MessageInfo(const MessageInfo &_other)
{
  *this->dataPtr = *_other.dataPtr;
}

//////////////////////////////////////////////////
MessageInfo::~MessageInfo()
{
}

//////////////////////////////////////////////////
std::string MessageInfo::Topic() const
{
  return this->dataPtr->topic;
}

//////////////////////////////////////////////////
void MessageInfo::SetTopic(const std::string &_topic)
{
  this->dataPtr->topic = _topic;
}

//////////////////////////////////////////////////
std::string MessageInfo::Type() const
{
  return this->dataPtr->type;
}

//////////////////////////////////////////////////
void MessageInfo::SetType(const std::string &_type)
{
  this->dataPtr->type = _type;
}

//////////////////////////////////////////////////
std::string MessageInfo::Partition() const
{
  return this->dataPtr->partition;
}

//////////////////////////////////////////////////
void MessageInfo::SetPartition(const std::string &_partition)
{
  this->dataPtr->partition = _partition;
}
