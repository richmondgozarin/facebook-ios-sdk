//
//  Facebook+Graph.h
//  Hackbook
//
//  Created by Chris Ross on 01/06/2012.
//  Copyright (c) 2012 hiddenMemory Ltd. All rights reserved.
//

#import "Facebook.h"
#import <CoreLocation/CoreLocation.h>

@interface Facebook (Graph)

#pragma mark - me
- (void)me:(void(^)(NSDictionary *me))completionHandler
	 error:(void(^)(NSError *error))errorHandler;

#pragma mark - friends
// ID, Name, Picture URL
- (void)friends:(void(^)(NSArray *friends))completionHandler
		  error:(void(^)(NSError *error))errorHandler;

- (void)friendsWithKeys:(NSArray*)keys 
			 completion:(void(^)(NSArray *friends))completionHandler
				  error:(void(^)(NSError *error))errorHandler;

- (void)friendsWithApp:(void(^)(NSArray *friends))completionHandler
				 error:(void(^)(NSError *error))errorHandler;


#pragma mark - fetching content
- (void)albums:(void(^)(NSArray *albums))completionHandler
		 error:(void(^)(NSError *error))errorHandler;

- (void)photosInAlbum:(NSString*)album
		   completion:(void(^)(NSArray *photos))completionHandler
				error:(void(^)(NSError *error))errorHandler;

- (void)videos:(void(^)(NSArray *photos))completionHandler
		 error:(void(^)(NSError *error))errorHandler;

- (void)setStatus:(NSString*)status
	   completion:(void(^)(NSString *status))completionHandler
			error:(void(^)(NSError *error))errorHandler;

#pragma mark - sharing content
- (void)sharePhoto:(UIImage*)image
			 title:(NSString*)title
		completion:(void(^)(NSString *photoID))completionHandler
			 error:(void(^)(NSError *error))errorHandler;

- (void)sharePhoto:(UIImage*)image
			 album:(NSString*)album
			 title:(NSString*)title
		completion:(void(^)(NSString *photoID))completionHandler
			 error:(void(^)(NSError *error))errorHandler;

- (void)shareVideo:(NSData*)video
			 title:(NSString*)title
		completion:(void(^)(NSString *videoID))completionHandler
			 error:(void(^)(NSError *error))errorHandler;

#pragma mark - search
- (void)locationSearch:(NSString *)query
            coordinate:(CLLocationCoordinate2D)coordinate
              distance:(int)distance
                fields:(NSArray *)fields
				 range:(NSUInteger)range
			completion:(void(^)(NSArray *locations))completionHandler
				 error:(void(^)(NSError *error))errorHandler;

- (void)postsSearch:(NSString *)query
             fields:(NSArray *)fields
              range:(NSUInteger)range
         completion:(void(^)(NSArray *locations))completionHandler
              error:(void(^)(NSError *error))errorHandler;

- (void)peopleSearch:(NSString *)query
              fields:(NSArray *)fields
               range:(NSUInteger)range
          completion:(void(^)(NSArray *locations))completionHandler
               error:(void(^)(NSError *error))errorHandler;
    
- (void)pagesSearch:(NSString *)query
             fields:(NSArray *)fields
              range:(NSUInteger)range
         completion:(void(^)(NSArray *locations))completionHandler
              error:(void(^)(NSError *error))errorHandler;

- (void)eventsSearch:(NSString *)query
              fields:(NSArray *)fields
               range:(NSUInteger)range
          completion:(void(^)(NSArray *locations))completionHandler
               error:(void(^)(NSError *error))errorHandler;

- (void)checkinsSearch:(NSString *)query   
                fields:(NSArray *)fields
                 range:(NSUInteger)range
            completion:(void(^)(NSArray *locations))completionHandler
                error:(void(^)(NSError *error))errorHandler;

#pragma mark - id query

- (void)idsQuery:(NSString *)query   
                fields:(NSArray *)fields
                 range:(NSUInteger)range
            completion:(void(^)(NSArray *locations))completionHandler
                 error:(void(^)(NSError *error))errorHandler;




@end
