//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NSAttributedStringUIFoundationAdditions)
+ (id)_documentTypeForFileType:(id)arg1;
+ (id)allowedSecureCodingClasses;
+ (_Bool)_isAttributedStringAgent;
+ (id)attributedStringWithAttachment:(id)arg1;
- (int)itemNumberInTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned int)arg2 completeRow:(_Bool *)arg3;
- (_Bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (_Bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned int)arg2;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned int)arg2;
- (id)rulerAttributesInRange:(struct _NSRange)arg1;
- (id)fontAttributesInRange:(struct _NSRange)arg1;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange)arg1 documentAttributes:(id)arg2 subresources:(id *)arg3;
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;
- (_Bool)containsAttachments;
- (_Bool)containsAttachmentsInRange:(struct _NSRange)arg1;
- (unsigned int)nextWordFromIndex:(unsigned int)arg1 forward:(_Bool)arg2;
- (unsigned int)lineBreakByHyphenatingBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned int)lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned int)_lineBreakBeforeIndex:(unsigned int)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(_Bool)arg3;
- (struct _NSRange)doubleClickAtIndex:(unsigned int)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned int)arg1;
- (id)defaultLanguage;
- (_Bool)_isStringDrawingTextStorage;
- (struct CGSize)size;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1;
- (_Bool)hasColorGlyphsInRange:(struct _NSRange)arg1;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(int)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(int)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(int)arg2 context:(id)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 withTrackingAdjustment:(float)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(float)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(int)arg2 context:(id)arg3;
@end

