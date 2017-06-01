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



#include "DataModel_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

DataModel_attributes::DataModel_attributes()
{
    m_Content = U("");
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    
}

DataModel_attributes::~DataModel_attributes()
{
}

void DataModel_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value DataModel_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("content")] = ModelBase::toJson(m_Content);
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

void DataModel_attributes::fromJson(web::json::value& val)
{
    setContent(ModelBase::stringFromJson(val[U("content")]));
    if(val.has_field(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromJson(val[U("created_at")]));
                
    }
    if(val.has_field(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromJson(val[U("updated_at")]));
                
    }
    
}

void DataModel_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("content"), m_Content));
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_at"), m_Created_at));
                
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_at"), m_Updated_at));
                
    }
    
}

void DataModel_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setContent(ModelBase::stringFromHttpContent(multipart->getContent(U("content"))));
    if(multipart->hasContent(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("created_at"))));
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("updated_at"))));
                
    }
    
}
    
   
utility::string_t DataModel_attributes::getContent() const
{
	return m_Content;
}
void DataModel_attributes::setContent(utility::string_t value)
{
	m_Content = value;
    
}
utility::string_t DataModel_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void DataModel_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool DataModel_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void DataModel_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t DataModel_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void DataModel_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool DataModel_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void DataModel_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

