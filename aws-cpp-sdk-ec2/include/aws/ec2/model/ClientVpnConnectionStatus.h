﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnConnectionStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the status of a client connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnConnectionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ClientVpnConnectionStatus
  {
  public:
    ClientVpnConnectionStatus();
    ClientVpnConnectionStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientVpnConnectionStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The state of the client connection.</p>
     */
    inline const ClientVpnConnectionStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline void SetCode(const ClientVpnConnectionStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state of the client connection.</p>
     */
    inline void SetCode(ClientVpnConnectionStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state of the client connection.</p>
     */
    inline ClientVpnConnectionStatus& WithCode(const ClientVpnConnectionStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state of the client connection.</p>
     */
    inline ClientVpnConnectionStatus& WithCode(ClientVpnConnectionStatusCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline ClientVpnConnectionStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline ClientVpnConnectionStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the client connection, if applicable.</p>
     */
    inline ClientVpnConnectionStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ClientVpnConnectionStatusCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
