﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ErrorDocument.h>
#include <aws/s3-crt/model/IndexDocument.h>
#include <aws/s3-crt/model/RedirectAllRequestsTo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/RoutingRule.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Specifies website configuration parameters for an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/WebsiteConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API WebsiteConfiguration
  {
  public:
    WebsiteConfiguration();
    WebsiteConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    WebsiteConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the error document for the website.</p>
     */
    inline const ErrorDocument& GetErrorDocument() const{ return m_errorDocument; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline bool ErrorDocumentHasBeenSet() const { return m_errorDocumentHasBeenSet; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline void SetErrorDocument(const ErrorDocument& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = value; }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline void SetErrorDocument(ErrorDocument&& value) { m_errorDocumentHasBeenSet = true; m_errorDocument = std::move(value); }

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline WebsiteConfiguration& WithErrorDocument(const ErrorDocument& value) { SetErrorDocument(value); return *this;}

    /**
     * <p>The name of the error document for the website.</p>
     */
    inline WebsiteConfiguration& WithErrorDocument(ErrorDocument&& value) { SetErrorDocument(std::move(value)); return *this;}


    /**
     * <p>The name of the index document for the website.</p>
     */
    inline const IndexDocument& GetIndexDocument() const{ return m_indexDocument; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline bool IndexDocumentHasBeenSet() const { return m_indexDocumentHasBeenSet; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline void SetIndexDocument(const IndexDocument& value) { m_indexDocumentHasBeenSet = true; m_indexDocument = value; }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline void SetIndexDocument(IndexDocument&& value) { m_indexDocumentHasBeenSet = true; m_indexDocument = std::move(value); }

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline WebsiteConfiguration& WithIndexDocument(const IndexDocument& value) { SetIndexDocument(value); return *this;}

    /**
     * <p>The name of the index document for the website.</p>
     */
    inline WebsiteConfiguration& WithIndexDocument(IndexDocument&& value) { SetIndexDocument(std::move(value)); return *this;}


    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline const RedirectAllRequestsTo& GetRedirectAllRequestsTo() const{ return m_redirectAllRequestsTo; }

    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline bool RedirectAllRequestsToHasBeenSet() const { return m_redirectAllRequestsToHasBeenSet; }

    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline void SetRedirectAllRequestsTo(const RedirectAllRequestsTo& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = value; }

    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline void SetRedirectAllRequestsTo(RedirectAllRequestsTo&& value) { m_redirectAllRequestsToHasBeenSet = true; m_redirectAllRequestsTo = std::move(value); }

    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline WebsiteConfiguration& WithRedirectAllRequestsTo(const RedirectAllRequestsTo& value) { SetRedirectAllRequestsTo(value); return *this;}

    /**
     * <p>The redirect behavior for every request to this bucket's website
     * endpoint.</p>  <p>If you specify this property, you can't specify any
     * other property.</p> 
     */
    inline WebsiteConfiguration& WithRedirectAllRequestsTo(RedirectAllRequestsTo&& value) { SetRedirectAllRequestsTo(std::move(value)); return *this;}


    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline const Aws::Vector<RoutingRule>& GetRoutingRules() const{ return m_routingRules; }

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline bool RoutingRulesHasBeenSet() const { return m_routingRulesHasBeenSet; }

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline void SetRoutingRules(const Aws::Vector<RoutingRule>& value) { m_routingRulesHasBeenSet = true; m_routingRules = value; }

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline void SetRoutingRules(Aws::Vector<RoutingRule>&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::move(value); }

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline WebsiteConfiguration& WithRoutingRules(const Aws::Vector<RoutingRule>& value) { SetRoutingRules(value); return *this;}

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline WebsiteConfiguration& WithRoutingRules(Aws::Vector<RoutingRule>&& value) { SetRoutingRules(std::move(value)); return *this;}

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline WebsiteConfiguration& AddRoutingRules(const RoutingRule& value) { m_routingRulesHasBeenSet = true; m_routingRules.push_back(value); return *this; }

    /**
     * <p>Rules that define when a redirect is applied and the redirect behavior.</p>
     */
    inline WebsiteConfiguration& AddRoutingRules(RoutingRule&& value) { m_routingRulesHasBeenSet = true; m_routingRules.push_back(std::move(value)); return *this; }

  private:

    ErrorDocument m_errorDocument;
    bool m_errorDocumentHasBeenSet;

    IndexDocument m_indexDocument;
    bool m_indexDocumentHasBeenSet;

    RedirectAllRequestsTo m_redirectAllRequestsTo;
    bool m_redirectAllRequestsToHasBeenSet;

    Aws::Vector<RoutingRule> m_routingRules;
    bool m_routingRulesHasBeenSet;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
