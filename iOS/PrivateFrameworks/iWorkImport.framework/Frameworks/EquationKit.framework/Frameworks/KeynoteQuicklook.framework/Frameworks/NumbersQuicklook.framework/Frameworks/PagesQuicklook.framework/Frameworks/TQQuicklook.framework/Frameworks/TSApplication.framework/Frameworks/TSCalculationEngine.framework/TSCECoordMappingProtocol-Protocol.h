//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexSet, TSCECellTractRef, TSKShuffleMapping;

@protocol TSCECoordMappingProtocol
- (TSKShuffleMapping *)baseShuffleMapForViewShuffleMap:(TSKShuffleMapping *)arg1;
- (TSCECellTractRef *)viewTractRefForChromeTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)viewTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)chromeTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)chromeTractRefForBaseTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)baseTractRefForViewTractRef:(TSCECellTractRef *)arg1;
- (TSCECellTractRef *)baseTractRefForChromeTractRef:(TSCECellTractRef *)arg1;
- (const UUIDData_5fbc143e *)tableUID;
- (RefTypeHolder_45a2a752)viewRangeRefForChromeRangeRef:(const RefTypeHolder_9036d455 *)arg1;
- (RefTypeHolder_9036d455)chromeRangeRefForViewRangeRef:(const RefTypeHolder_45a2a752 *)arg1;
- (RefTypeHolder_adbccd1a)viewCellRefForChromeCellRef:(const RefTypeHolder_cfaab535 *)arg1;
- (RefTypeHolder_adbccd1a)viewCellRefForBaseCellRef:(const RefTypeHolder_dbc9cf8d *)arg1;
- (RefTypeHolder_cfaab535)chromeCellRefForViewCellRef:(const RefTypeHolder_adbccd1a *)arg1;
- (RefTypeHolder_cfaab535)chromeCellRefForBaseCellRef:(const RefTypeHolder_dbc9cf8d *)arg1;
- (RefTypeHolder_dbc9cf8d)baseCellRefForViewCellRef:(const RefTypeHolder_adbccd1a *)arg1;
- (RefTypeHolder_dbc9cf8d)baseCellRefForChromeCellRef:(const RefTypeHolder_cfaab535 *)arg1;
- (struct TSUViewCellCoord)viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord)arg1;
- (struct TSUViewCellCoord)viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUChromeCellCoord)chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (struct TSUChromeCellCoord)chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord)arg1;
- (struct TSUModelCellCoord)baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord)arg1;
- (struct TSUModelCellCoord)baseCellCoordForViewCellCoord:(struct TSUViewCellCoord)arg1;
- (NSIndexSet *)viewRowIndexesForChromeRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewColumnIndexesForChromeColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)chromeRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)chromeColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewRowIndexesForBaseRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)viewColumnIndexesForBaseColumnIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)baseRowIndexesForViewRowIndexes:(NSIndexSet *)arg1;
- (NSIndexSet *)baseColumnIndexesForViewColumnIndexes:(NSIndexSet *)arg1;
- (struct TSUViewRowIndex)viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex)arg1;
- (struct TSUChromeRowIndex)chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (struct TSUChromeColumnIndex)chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (struct TSUViewRowIndex)viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUViewColumnIndex)viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex)arg1;
- (struct TSUChromeRowIndex)chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex)arg1;
- (struct TSUChromeColumnIndex)chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex)arg1;
- (struct TSUModelRowIndex)baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex)arg1;
- (struct TSUModelRowIndex)baseRowIndexForViewRowIndex:(struct TSUViewRowIndex)arg1;
- (struct TSUModelColumnIndex)baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex)arg1;
- (_Bool)isIdentityMapping;
@end

