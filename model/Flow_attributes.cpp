/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "Flow_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

Flow_attributes::Flow_attributes()
{
    m_Name = U("");
    m_NameIsSet = false;
    m_Description = U("");
    m_DescriptionIsSet = false;
    m_Process_id = U("");
    m_From_object_id = U("");
    m_From_object_type = U("");
    m_To_object_id = U("");
    m_To_object_type = U("");
    m_Type = U("");
    m_Condition = U("");
    m_ConditionIsSet = false;
    m_Default = false;
    m_Optional = false;
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    
}

Flow_attributes::~Flow_attributes()
{
}

void Flow_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value Flow_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_DescriptionIsSet)
    {
        val[U("description")] = ModelBase::toJson(m_Description);
    }
    val[U("process_id")] = ModelBase::toJson(m_Process_id);
    val[U("from_object_id")] = ModelBase::toJson(m_From_object_id);
    val[U("from_object_type")] = ModelBase::toJson(m_From_object_type);
    val[U("to_object_id")] = ModelBase::toJson(m_To_object_id);
    val[U("to_object_type")] = ModelBase::toJson(m_To_object_type);
    val[U("type")] = ModelBase::toJson(m_Type);
    if(m_ConditionIsSet)
    {
        val[U("condition")] = ModelBase::toJson(m_Condition);
    }
    val[U("default")] = ModelBase::toJson(m_Default);
    val[U("optional")] = ModelBase::toJson(m_Optional);
    if(m_Created_atIsSet)
    {
        val[U("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[U("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    

    return val;
}

void Flow_attributes::fromJson(web::json::value& val)
{
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
                
    }
    if(val.has_field(U("description")))
    {
        setDescription(ModelBase::stringFromJson(val[U("description")]));
                
    }
    setProcessId(ModelBase::stringFromJson(val[U("process_id")]));
    setFromObjectId(ModelBase::stringFromJson(val[U("from_object_id")]));
    setFromObjectType(ModelBase::stringFromJson(val[U("from_object_type")]));
    setToObjectId(ModelBase::stringFromJson(val[U("to_object_id")]));
    setToObjectType(ModelBase::stringFromJson(val[U("to_object_type")]));
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("condition")))
    {
        setCondition(ModelBase::stringFromJson(val[U("condition")]));
                
    }
    setDefault(ModelBase::boolFromJson(val[U("default")]));
    setOptional(ModelBase::boolFromJson(val[U("optional")]));
    if(val.has_field(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromJson(val[U("created_at")]));
                
    }
    if(val.has_field(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromJson(val[U("updated_at")]));
                
    }
    
}

void Flow_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
                
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("description"), m_Description));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("process_id"), m_Process_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("from_object_id"), m_From_object_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("from_object_type"), m_From_object_type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("to_object_id"), m_To_object_id));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("to_object_type"), m_To_object_type));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_ConditionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("condition"), m_Condition));
                
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + U("default"), m_Default));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("optional"), m_Optional));
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_at"), m_Created_at));
                
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_at"), m_Updated_at));
                
    }
    
}

void Flow_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
                
    }
    if(multipart->hasContent(U("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(U("description"))));
                
    }
    setProcessId(ModelBase::stringFromHttpContent(multipart->getContent(U("process_id"))));
    setFromObjectId(ModelBase::stringFromHttpContent(multipart->getContent(U("from_object_id"))));
    setFromObjectType(ModelBase::stringFromHttpContent(multipart->getContent(U("from_object_type"))));
    setToObjectId(ModelBase::stringFromHttpContent(multipart->getContent(U("to_object_id"))));
    setToObjectType(ModelBase::stringFromHttpContent(multipart->getContent(U("to_object_type"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("condition")))
    {
        setCondition(ModelBase::stringFromHttpContent(multipart->getContent(U("condition"))));
                
    }
    setDefault(ModelBase::boolFromHttpContent(multipart->getContent(U("default"))));
    setOptional(ModelBase::boolFromHttpContent(multipart->getContent(U("optional"))));
    if(multipart->hasContent(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("created_at"))));
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("updated_at"))));
                
    }
    
}
    
   
utility::string_t Flow_attributes::getName() const
{
	return m_Name;
}
void Flow_attributes::setName(utility::string_t value)
{
	m_Name = value;
    m_NameIsSet = true;
}
bool Flow_attributes::nameIsSet() const
{
    return m_NameIsSet;
}
void Flow_attributes::unsetName() 
{
    m_NameIsSet = false;
}
utility::string_t Flow_attributes::getDescription() const
{
	return m_Description;
}
void Flow_attributes::setDescription(utility::string_t value)
{
	m_Description = value;
    m_DescriptionIsSet = true;
}
bool Flow_attributes::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Flow_attributes::unsetDescription() 
{
    m_DescriptionIsSet = false;
}
utility::string_t Flow_attributes::getProcessId() const
{
	return m_Process_id;
}
void Flow_attributes::setProcessId(utility::string_t value)
{
	m_Process_id = value;
    
}
utility::string_t Flow_attributes::getFromObjectId() const
{
	return m_From_object_id;
}
void Flow_attributes::setFromObjectId(utility::string_t value)
{
	m_From_object_id = value;
    
}
utility::string_t Flow_attributes::getFromObjectType() const
{
	return m_From_object_type;
}
void Flow_attributes::setFromObjectType(utility::string_t value)
{
	m_From_object_type = value;
    
}
utility::string_t Flow_attributes::getToObjectId() const
{
	return m_To_object_id;
}
void Flow_attributes::setToObjectId(utility::string_t value)
{
	m_To_object_id = value;
    
}
utility::string_t Flow_attributes::getToObjectType() const
{
	return m_To_object_type;
}
void Flow_attributes::setToObjectType(utility::string_t value)
{
	m_To_object_type = value;
    
}
utility::string_t Flow_attributes::getType() const
{
	return m_Type;
}
void Flow_attributes::setType(utility::string_t value)
{
	m_Type = value;
    
}
utility::string_t Flow_attributes::getCondition() const
{
	return m_Condition;
}
void Flow_attributes::setCondition(utility::string_t value)
{
	m_Condition = value;
    m_ConditionIsSet = true;
}
bool Flow_attributes::conditionIsSet() const
{
    return m_ConditionIsSet;
}
void Flow_attributes::unsetCondition() 
{
    m_ConditionIsSet = false;
}
bool Flow_attributes::getDefault() const
{
	return m_Default;
}
void Flow_attributes::setDefault(bool value)
{
	m_Default = value;
    
}
bool Flow_attributes::getOptional() const
{
	return m_Optional;
}
void Flow_attributes::setOptional(bool value)
{
	m_Optional = value;
    
}
utility::string_t Flow_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void Flow_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Flow_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void Flow_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t Flow_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void Flow_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool Flow_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void Flow_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

