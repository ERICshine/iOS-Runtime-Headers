/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, RTF_OIXMLElement;



@interface RTF_OIXMLDocument : RTF_OIXMLNode 
{
    RTF_OIXMLElement *_rootElement;
    NSString *_version;
    NSString *_encoding;
}


- (id)copyMutableXMLString;
- (void)setVersion:(id)arg1;
- (void)setRootElement:(id)arg1;
- (id)contentString;
- (id)initWithRootElement:(id)arg1;
- (void)setCharacterEncoding:(id)arg1;
- (id)rootElement;
- (id)openingTagString;
- (id)XMLString;
- (id)closingTagString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;

@end