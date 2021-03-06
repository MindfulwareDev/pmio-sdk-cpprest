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



#include "ResultSuccess.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

ResultSuccess::ResultSuccess()
{
    m_MetaIsSet = false;
    
}

ResultSuccess::~ResultSuccess()
{
}

void ResultSuccess::validate() 
{
    // TODO: implement validation
}

web::json::value ResultSuccess::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_MetaIsSet)
    {
        val[U("meta")] = ModelBase::toJson(m_Meta);
    }
    

    return val;
}

void ResultSuccess::fromJson(web::json::value& val)
{
    if(val.has_field(U("meta")))
    {
        if(!val[U("meta")].is_null()) 
        {
            std::shared_ptr<ResultSuccess_meta> newItem(new ResultSuccess_meta());
            newItem->fromJson(val[U("meta")]);
            setMeta( newItem );
        }
                
    }
    
}

void ResultSuccess::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_MetaIsSet)
    {
        if (m_Meta.get())
        {
            m_Meta->toMultipart(multipart, U("meta."));
        }
                
    }
    
}

void ResultSuccess::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("meta")))
    {
        if(multipart->hasContent(U("meta")))
        {
            std::shared_ptr<ResultSuccess_meta> newItem(new ResultSuccess_meta());
            newItem->fromMultiPart(multipart, U("meta."));
            setMeta( newItem );
        }
                
    }
    
}
    
   
std::shared_ptr<ResultSuccess_meta> ResultSuccess::getMeta() const
{
	return m_Meta;
}
void ResultSuccess::setMeta(std::shared_ptr<ResultSuccess_meta> value)
{
	m_Meta = value;
    m_MetaIsSet = true;
}
bool ResultSuccess::metaIsSet() const
{
    return m_MetaIsSet;
}
void ResultSuccess::unsetMeta() 
{
    m_MetaIsSet = false;
}

}
}
}
}

