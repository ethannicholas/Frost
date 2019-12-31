<?xml version="1.0" encoding="UTF-8"?> 
<!--
    Stylesheet for the table of contents
-->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" indent="yes"/>

    <xsl:template match="/entry">
        <script src="site.js"/>
        <div id="toc">
            <ul>
                <li><a href="index.html">Home</a></li>
                <li><a href="gettingStarted.html">Getting Started</a></li>
                <li><a href="currentStatus.html">Current Status</a></li>
                <li id="documentationBullet" class="open">
                    Documentation
                    <ul>
                        <li><a href="frostc.html"><code>frostc</code></a></li>
                        <li id="syntaxBullet" class="collapse">
                            <a href="overview.html">Syntax</a>
                            <ul>
                                <li><a href="keywords.html">Keywords</a></li>
                                <li id="statementsBullet" class="collapse">
                                    <a href="statements.html">Statements</a>
                                    <ul>
                                        <li><a href="statements.html#Assignment">Assignment</a></li>
                                        <li><a href="statements.html#Method%20Calls">Method Calls</a></li>
                                        <li><a href="statements.html#if"><code>if</code></a></li>
                                        <li><a href="statements.html#for"><code>for</code></a></li>
                                        <li><a href="statements.html#while"><code>while</code></a></li>
                                        <li><a href="statements.html#do"><code>do</code></a></li>
                                        <li><a href="statements.html#loop"><code>loop</code></a></li>
                                        <li><a href="statements.html#break"><code>break</code></a></li>
                                        <li><a href="statements.html#continue"><code>continue</code></a></li>
                                        <li><a href="statements.html#return"><code>return</code></a></li>
                                        <li><a href="statements.html#assert"><code>assert</code></a></li>
                                        <li><a href="statements.html#unreachable"><code>unreachable</code></a></li>
                                        <li><a href="statements.html#match"><code>match</code></a></li>
                                        <li><a href="statements.html#try"><code>try</code></a></li>
                                    </ul>
                                </li>
                                <li id="expressionsBullet" class="collapse">
                                    <a href="expressions.html">Expressions</a>
                                    <ul>
                                        <li><a href="identifiers.html">Identifiers</a></li>
                                        <li><a href="operators.html">Operators</a></li>
                                        <li><a href="operatorOverloading.html">Operator Overloading</a></li>
                                        <li><a href="stringInterpolation.html">String Interpolation</a></li>
                                        <li><a href="self.html"><code>self</code></a></li>
                                        <li><a href="super.html"><code>super</code></a></li>
                                        <li><a href="null.html"><code>null</code></a></li>
                                        <li><a href="arrayLiterals.html">Array Literals</a></li>
                                        <li><a href="tuples.html">Tuples</a></li>
                                        <li><a href="inlineMethods.html">Inline Methods</a></li>
                                    </ul>
                                </li>
                                <li><a href="annotations.html">Annotations</a></li>
                                <li><a href="comments.html">Comments</a></li>
                                <li><a href="documentationComments.html">Documentation Comments</a></li>
                                <li><a href="errorHandling.html">Error Handling</a></li>
                            </ul>
                        </li>
                        <li id="classesBullet" class="collapse">
                            <a href="classes.html">Classes</a>
                            <ul>
                                <li><a href="interfaces.html">Interfaces</a></li>
                                <li><a href="choices.html">Choices</a></li>
                                <li><a href="values.html">Values</a></li>
                                <li><a href="immutability.html">Immutability</a></li>
                                <li id="packagesBullet" class="collapse">
                                    <a href="packages.html">Packages</a>
                                    <ul>
                                        <li><a href="packages.html#Uses">Uses</a></li>
                                    </ul>
                                </li>
                                <li><a href="generics.html">Generics</a></li>
                                <li><a href="bareCode.html">Bare Code</a></li>
                            </ul>
                        </li>
                        <li id="methodsBullet" class="collapse">
                            <a href="methods.html">Methods</a>
                            <ul>
                                <li><a href="main.html"><code>main</code></a></li>
                                <li><a href="functions.html">Functions</a></li>
                                <li><a href="initMethods.html">Init Methods</a></li>
                                <li><a href="inlineMethods.html">Inline Methods</a></li>
                                <li><a href="innerMethods.html">Inner Methods</a></li>
                                <li><a href="methodReferences.html">Method References</a></li>
                            </ul>
                        </li>
                        <li><a href="fields.html">Fields</a></li>
                        <li id="typesBullet" class="collapse">
                            <a href="types.html">Types</a>
                            <ul>
                                <li><a href="basicTypes.html">Basic Types</a></li>
                                <li><a href="defaultValues.html">Default Values</a></li>
                                <li><a href="implicitCasting.html">Implicit Casting</a></li>
                                <li><a href="nonNullability.html">Non-nullability</a></li>
                            </ul>
                        </li>
                        <li id="variablesBullet" class="collapse">
                            <a href="variablesAndConstants.html">Variables and Constants</a>
                            <ul>
                                <li><a href="variables.html">Variables</a></li>
                                <li><a href="defines.html">Defines</a></li>
                                <li><a href="constants.html">Constants</a></li>
                                <li><a href="properties.html">Properties</a></li>
                            </ul>
                        </li>
                        <li id="memoryBullet" class="collapse">
                            <a href="memoryManagement.html">Memory</a>
                            <ul>
                                <li><a href="weakReferences.html">Weak References</a></li>
                            </ul>
                        </li>
                        <li><a href="threads.html">Threads</a></li>
                    </ul>
                </li>
                <li id="apiBullet" class="collapse">
                    API Documentation
                    <ul>
                        <xsl:apply-templates select="contents/entry"/>
                    </ul>
                </li>
            </ul>
        </div>
        <script>prepareToC("")</script>
    </xsl:template>

    <xsl:template match="/entry/contents/entry">
        <li id="entry.{name}">
          <a href="{url}"><code><xsl:value-of select="simpleName"/></code></a>
            <code><xsl:apply-templates select="contents"/></code>
        </li>
    </xsl:template>

    <xsl:template match="entry">
        <li id="entry.{name}">
            <xsl:if test="contents">
                <xsl:attribute name="class">collapse</xsl:attribute>
            </xsl:if>
            <a href="{url}"><xsl:value-of select="simpleName"/></a>
            <xsl:apply-templates select="contents"/>
        </li>
    </xsl:template>

    <xsl:template match="contents">
        <ul>
            <xsl:apply-templates/>
        </ul>
    </xsl:template>
</xsl:stylesheet>