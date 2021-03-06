//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

#import <PhotosUICore/PXInboxModelDataSourceBase-Protocol.h>

@class NSArray, NSString;

@interface PXInboxModelDataSource : PXSectionedDataSource <PXInboxModelDataSourceBase>
{
    NSArray *_models;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *models; // @synthesize models=_models;
- (struct PXSimpleIndexPath)indexPathForModel:(id)arg1;
- (id)modelAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

