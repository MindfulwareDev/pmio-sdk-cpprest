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



#include "TaskConnector_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

TaskConnector_attributes::TaskConnector_attributes()
{
    m_Task_id = nullptr;
    m_Task_idIsSet = false;
    m_Connector_class = U("");
    m_Connector_classIsSet = false;
    m_Input_parameters = U("");
    m_Input_parametersIsSet = false;
    m_Output_parameters = U("");
    m_Output_parametersIsSet = false;
    m_Async_before = false;
    m_Async_beforeIsSet = false;
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    
}

TaskConnector_attributes::~TaskConnector_attributes()
{
}

void TaskConnector_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value TaskConnector_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	if(m_Task_idIsSet)
    {
        val[U("task_id")] = ModelBase::toJson(m_Task_id);
    }
    if(m_Connector_classIsSet)
    {
        val[U("connector_class")] = ModelBase::toJson(m_Connector_class);
    }
    if(m_Input_parametersIsSet)
    {
        val[U("input_parameters")] = ModelBase::toJson(m_Input_parameters);
    }
    if(m_Output_parametersIsSet)
    {
        val[U("output_parameters")] = ModelBase::toJson(m_Output_parameters);
    }
    if(m_Async_beforeIsSet)
    {
        val[U("async_before")] = ModelBase::toJson(m_Async_before);
    }
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

void TaskConnector_attributes::fromJson(web::json::value& val)
{
    if(val.has_field(U("task_id")))
    {
        setTaskId(ModelBase::int32_tFromJson(val[U("task_id")]));
    }
    if(val.has_field(U("connector_class")))
    {
        setConnectorClass(ModelBase::stringFromJson(val[U("connector_class")]));
                
    }
    if(val.has_field(U("input_parameters")))
    {
        setInputParameters(ModelBase::stringFromJson(val[U("input_parameters")]));
                
    }
    if(val.has_field(U("output_parameters")))
    {
        setOutputParameters(ModelBase::stringFromJson(val[U("output_parameters")]));
                
    }
    if(val.has_field(U("async_before")))
    {
        setAsyncBefore(ModelBase::boolFromJson(val[U("async_before")]));
    }
    if(val.has_field(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromJson(val[U("created_at")]));
                
    }
    if(val.has_field(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromJson(val[U("updated_at")]));
                
    }
    
}

void TaskConnector_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	if(m_Task_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("task_id"), m_Task_id));
    }
    if(m_Connector_classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("connector_class"), m_Connector_class));
                
    }
    if(m_Input_parametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("input_parameters"), m_Input_parameters));
                
    }
    if(m_Output_parametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("output_parameters"), m_Output_parameters));
                
    }
    if(m_Async_beforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("async_before"), m_Async_before));
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_at"), m_Created_at));
                
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_at"), m_Updated_at));
                
    }
    
}

void TaskConnector_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    if(multipart->hasContent(U("task_id")))
    {
        setTaskId(ModelBase::int32_tFromHttpContent(multipart->getContent(U("task_id"))));
    }
    if(multipart->hasContent(U("connector_class")))
    {
        setConnectorClass(ModelBase::stringFromHttpContent(multipart->getContent(U("connector_class"))));
                
    }
    if(multipart->hasContent(U("input_parameters")))
    {
        setInputParameters(ModelBase::stringFromHttpContent(multipart->getContent(U("input_parameters"))));
                
    }
    if(multipart->hasContent(U("output_parameters")))
    {
        setOutputParameters(ModelBase::stringFromHttpContent(multipart->getContent(U("output_parameters"))));
                
    }
    if(multipart->hasContent(U("async_before")))
    {
        setAsyncBefore(ModelBase::boolFromHttpContent(multipart->getContent(U("async_before"))));
    }
    if(multipart->hasContent(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("created_at"))));
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("updated_at"))));
                
    }
    
}
    
   
int32_t TaskConnector_attributes::getTaskId() const
{
	return m_Task_id;
}
void TaskConnector_attributes::setTaskId(int32_t value)
{
	m_Task_id = value;
    m_Task_idIsSet = true;
}
bool TaskConnector_attributes::task_idIsSet() const
{
    return m_Task_idIsSet;
}
void TaskConnector_attributes::unsetTask_id() 
{
    m_Task_idIsSet = false;
}
utility::string_t TaskConnector_attributes::getConnectorClass() const
{
	return m_Connector_class;
}
void TaskConnector_attributes::setConnectorClass(utility::string_t value)
{
	m_Connector_class = value;
    m_Connector_classIsSet = true;
}
bool TaskConnector_attributes::connector_classIsSet() const
{
    return m_Connector_classIsSet;
}
void TaskConnector_attributes::unsetConnector_class() 
{
    m_Connector_classIsSet = false;
}
utility::string_t TaskConnector_attributes::getInputParameters() const
{
	return m_Input_parameters;
}
void TaskConnector_attributes::setInputParameters(utility::string_t value)
{
	m_Input_parameters = value;
    m_Input_parametersIsSet = true;
}
bool TaskConnector_attributes::input_parametersIsSet() const
{
    return m_Input_parametersIsSet;
}
void TaskConnector_attributes::unsetInput_parameters() 
{
    m_Input_parametersIsSet = false;
}
utility::string_t TaskConnector_attributes::getOutputParameters() const
{
	return m_Output_parameters;
}
void TaskConnector_attributes::setOutputParameters(utility::string_t value)
{
	m_Output_parameters = value;
    m_Output_parametersIsSet = true;
}
bool TaskConnector_attributes::output_parametersIsSet() const
{
    return m_Output_parametersIsSet;
}
void TaskConnector_attributes::unsetOutput_parameters() 
{
    m_Output_parametersIsSet = false;
}
bool TaskConnector_attributes::getAsyncBefore() const
{
	return m_Async_before;
}
void TaskConnector_attributes::setAsyncBefore(bool value)
{
	m_Async_before = value;
    m_Async_beforeIsSet = true;
}
bool TaskConnector_attributes::async_beforeIsSet() const
{
    return m_Async_beforeIsSet;
}
void TaskConnector_attributes::unsetAsync_before() 
{
    m_Async_beforeIsSet = false;
}
utility::string_t TaskConnector_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void TaskConnector_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool TaskConnector_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void TaskConnector_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t TaskConnector_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void TaskConnector_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool TaskConnector_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void TaskConnector_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}

}
}
}
}

