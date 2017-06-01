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



#include "BpmnFile.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

BpmnFile::BpmnFile()
{
    m_Type = U("");
    m_AttributesIsSet = false;
    
}

BpmnFile::~BpmnFile()
{
}

void BpmnFile::validate() 
{
    // TODO: implement validation
}

web::json::value BpmnFile::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("type")] = ModelBase::toJson(m_Type);
    if(m_AttributesIsSet)
    {
        val[U("attributes")] = ModelBase::toJson(m_Attributes);
    }
    

    return val;
}

void BpmnFile::fromJson(web::json::value& val)
{
    setType(ModelBase::stringFromJson(val[U("type")]));
    if(val.has_field(U("attributes")))
    {
        if(!val[U("attributes")].is_null()) 
        {
            std::shared_ptr<BpmnFile_attributes> newItem(new BpmnFile_attributes());
            newItem->fromJson(val[U("attributes")]);
            setAttributes( newItem );
        }
                
    }
    
}

void BpmnFile::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("type"), m_Type));
    if(m_AttributesIsSet)
    {
        if (m_Attributes.get())
        {
            m_Attributes->toMultipart(multipart, U("attributes."));
        }
                
    }
    
}

void BpmnFile::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setType(ModelBase::stringFromHttpContent(multipart->getContent(U("type"))));
    if(multipart->hasContent(U("attributes")))
    {
        if(multipart->hasContent(U("attributes")))
        {
            std::shared_ptr<BpmnFile_attributes> newItem(new BpmnFile_attributes());
            newItem->fromMultiPart(multipart, U("attributes."));
            setAttributes( newItem );
        }
                
    }
    
}
    
   
utility::string_t BpmnFile::getType() const
{
	return m_Type;
}
void BpmnFile::setType(utility::string_t value)
{
	m_Type = value;
    
}
std::shared_ptr<BpmnFile_attributes> BpmnFile::getAttributes() const
{
	return m_Attributes;
}
void BpmnFile::setAttributes(std::shared_ptr<BpmnFile_attributes> value)
{
	m_Attributes = value;
    m_AttributesIsSet = true;
}
bool BpmnFile::attributesIsSet() const
{
    return m_AttributesIsSet;
}
void BpmnFile::unsetAttributes() 
{
    m_AttributesIsSet = false;
}

}
}
}
}
