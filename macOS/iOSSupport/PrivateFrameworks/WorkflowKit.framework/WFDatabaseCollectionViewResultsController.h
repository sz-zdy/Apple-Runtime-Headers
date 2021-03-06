//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>

#import <WorkflowKit/UICollectionViewDataSource-Protocol.h>

@class NSString;

@interface WFDatabaseCollectionViewResultsController : WFDatabaseSectionedResultsController <UICollectionViewDataSource>
{
    BOOL _lastChangeIsUserDriven;
    BOOL _loaded;
}

@property(nonatomic, getter=isLoaded) BOOL loaded; // @synthesize loaded=_loaded;
@property(nonatomic) BOOL lastChangeIsUserDriven; // @synthesize lastChangeIsUserDriven=_lastChangeIsUserDriven;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)shouldScrollToInsertionAtIndexPath:(id)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (void)completedBatchUpdateForSection:(unsigned long long)arg1;
- (id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inCollectionView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

