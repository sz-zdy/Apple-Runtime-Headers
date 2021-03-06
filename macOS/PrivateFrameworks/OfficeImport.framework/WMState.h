//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableDictionary, WDParagraph, WDText;

__attribute__((visibility("hidden")))
@interface WMState : CMState
{
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned long long mBlockIndex;
    unsigned long long mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
    WDParagraph *_currentParagraph;
}

- (void).cxx_destruct;
@property(retain) WDParagraph *currentParagraph; // @synthesize currentParagraph=_currentParagraph;
- (BOOL)isHeaderOrFooter;
- (void)setIsHeaderOrFooter:(BOOL)arg1;
- (BOOL)isFrameEnd;
- (void)setIsFrameEnd:(BOOL)arg1;
- (BOOL)isFrameStart;
- (void)setIsFrameStart:(BOOL)arg1;
- (BOOL)isFrame;
- (void)setIsFrame:(BOOL)arg1;
- (id)lastFooter;
- (void)setLastFooter:(id)arg1;
- (id)lastHeader;
- (void)setLastHeader:(id)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg1;
- (float)pageHeight;
- (void)setPageHeight:(float)arg1;
- (unsigned long long)blockIndex;
- (void)setBlockIndex:(unsigned long long)arg1;
- (unsigned long long)runIndex;
- (void)setRunIndex:(unsigned long long)arg1;
- (float)pageOffset;
- (unsigned int)currentPage;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setListState:(id)arg1 forListDefinitionId:(int)arg2;
- (id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2;
- (id)listStateForListDefinitionId:(int)arg1;
- (void)clearCurrentListState;
- (BOOL)isCurrentListDefinitionId:(int)arg1;
- (BOOL)isCurrentListStateOverridden;
- (void)setCurrentListState:(id)arg1;
- (id)outlineState;
- (id)currentListState;
- (void)dealloc;
- (id)init;

@end

