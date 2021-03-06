/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEOWaypoint, NSDate;

@interface GEOQuickETARequest : NSObject {
    NSDate *_arrivalDate;
    GEOLocation *_currentLocation;
    NSDate *_departureDate;
    GEOWaypoint *_destination;
    GEOWaypoint *_source;
    int _transportType;
}

@property(readonly) NSDate * arrivalDate;
@property(readonly) GEOLocation * currentLocation;
@property(readonly) NSDate * departureDate;
@property(readonly) GEOWaypoint * destination;
@property(readonly) GEOWaypoint * source;
@property(readonly) int transportType;

- (id)arrivalDate;
- (id)currentLocation;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)initWithDirectionsRequest:(id)arg1;
- (id)initWithOrigin:(id)arg1 destinationLOI:(id)arg2;
- (id)initWithSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)source;
- (int)transportType;

@end
