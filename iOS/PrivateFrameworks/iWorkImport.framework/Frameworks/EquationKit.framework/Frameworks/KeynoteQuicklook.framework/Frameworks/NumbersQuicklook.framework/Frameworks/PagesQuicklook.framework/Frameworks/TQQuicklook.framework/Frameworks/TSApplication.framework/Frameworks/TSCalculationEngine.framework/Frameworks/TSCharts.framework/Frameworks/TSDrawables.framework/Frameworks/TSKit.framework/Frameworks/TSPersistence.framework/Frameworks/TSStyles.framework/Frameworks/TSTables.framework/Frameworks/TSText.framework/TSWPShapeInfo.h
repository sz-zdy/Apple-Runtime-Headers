//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDShapeInfo.h>

#import <TSText/TSDContainerInfo-Protocol.h>
#import <TSText/TSDSelectionStatisticsContributor-Protocol.h>
#import <TSText/TSWPStorageParent-Protocol.h>
#import <TSText/TSWPTextBoxNesting-Protocol.h>

@class NSArray, NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPDocumentRoot, TSWPPadding, TSWPShapeStyle, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment, TSWPFlowInfo;

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSWPTextBoxNesting>
{
    TSWPStorage *_containedStorage;
    _Bool _isTextBox;
    _Bool _preventsComments;
    _Bool _preventsChangeTracking;
    _Bool _ignoresInteriorWrap;
    TSPObject<TSWPFlowInfo> *_textFlow;
}

+ (id)p_newEmptyStorageWithContext:(id)arg1 paragraphStyle:(id)arg2;
+ (id)defaultPlaceholderTextForLocale:(id)arg1;
+ (void)setDefaultInstructionalText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoresInteriorWrap; // @synthesize ignoresInteriorWrap=_ignoresInteriorWrap;
@property(nonatomic) __weak TSPObject<TSWPFlowInfo> *textFlow; // @synthesize textFlow=_textFlow;
@property(readonly, nonatomic) _Bool preventsChangeTracking; // @synthesize preventsChangeTracking=_preventsChangeTracking;
@property(readonly, nonatomic) _Bool preventsComments; // @synthesize preventsComments=_preventsComments;
@property(readonly, nonatomic) _Bool isTextBox; // @synthesize isTextBox=_isTextBox;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (_Bool)p_growsAutomatically;
@property(readonly, nonatomic) _Bool supportsDropCapsInChildStorages;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (_Bool)p_isNonTopicParagraphBreakAtParagraphIndex:(unsigned long long)arg1;
- (unsigned long long)p_nonTopicParagraphBreakCount;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (unsigned long long)p_chunkCountForByBullet;
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (struct CGPoint)transformableObjectAnchorPoint;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *childInfos;
- (id)copyAcceptingTrackedChangesWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)fixPositionOfImportedAutosizedShape;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 dynamicallyDraggedLayout:(id)arg2;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *defaultInstructionalText;
@property(readonly, nonatomic) NSString *instructionalText;
- (void)setIsTextBoxForPersistence:(_Bool)arg1;
@property(readonly, nonatomic) _Bool displaysInstructionalText;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (void)dealloc;
- (Class)styleClass;
@property(nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property(retain, nonatomic) TSWPPadding *padding;
@property(readonly, nonatomic) _Bool supportsMultipleColumns;
@property(retain, nonatomic) TSWPColumns *columns;
@property(readonly, nonatomic) int columnDirection;
@property(nonatomic) int verticalAlignment;
@property(nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) _Bool textIsLinked;
@property(nonatomic) _Bool shrinkTextToFit;
- (_Bool)supportsShrinkTextToFit;
- (_Bool)supportsTextInset;
- (_Bool)canAnchor;
- (_Bool)isLocked;
@property(readonly, nonatomic) _Bool shouldIgnoreWPContent;
@property(readonly, nonatomic) long long nestedTextboxDepth;
@property(readonly, nonatomic) _Bool isRotatedOrFlipped;
- (_Bool)supportsParentRotation;
@property(readonly, nonatomic) _Bool isLinkable;
@property(readonly, nonatomic) _Bool isLinked;
- (id)i_ownedTextStorage;
- (void)i_setOwnedTextStorage:(id)arg1;
- (void)p_setOwnedTextStorage:(id)arg1;
- (id)textStorageForHeadOfTextFlow;
@property(readonly, nonatomic) TSWPStorage *textStorage;
-     // Error parsing type: v32@0:8^{ShapeInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{ShapeArchive}^{Reference}^{Reference}^{Reference}B}16@24, name: saveToArchive:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{ShapeInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{ShapeArchive}^{Reference}^{Reference}^{Reference}B}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (void)upgradeOwnedStorageWithFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeWithNewOwnedStorage;
- (unsigned long long)maxInlineNestingDepth;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) TSWPDocumentRoot *documentRoot; // @dynamic documentRoot;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(copy, nonatomic) TSDInfoGeometry *geometry; // @dynamic geometry;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(readonly, nonatomic) _Bool isMaster;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly) Class superclass;

@end

