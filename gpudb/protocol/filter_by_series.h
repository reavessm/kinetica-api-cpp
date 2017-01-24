/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_SERIES_H__
#define __FILTER_BY_SERIES_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterBySeries(const FilterBySeriesRequest&) const}.
     * <p>
     * Filters objects matching all points of the given track (works only on
     * track type data).  It allows users to specify a particular track to find
     * all other points in the table that fall within specified ranges-spatial
     * and temporal-of all points of the given track. Additionally, the user
     * can specify another track to see if the two intersect (or go close to
     * each other within the specified ranges). The user also has the
     * flexibility of using different metrics for the spatial distance
     * calculation: Euclidean (flat geometry) or Great Circle (spherical
     * geometry to approximate the Earth's surface distances). The filtered
     * points are stored in a newly created result set. The return value of the
     * function is the number of points in the resultant set (view).
     * <p>
     * This operation is synchronous meaning that GPUdb will not return a
     * response until all the objects are fully available.
     */
    struct FilterBySeriesRequest
    {

        /**
         * Constructs a FilterBySeriesRequest object with default parameter
         * values.
         */
        FilterBySeriesRequest() :
            tableName(std::string()),
            viewName(std::string()),
            trackId(std::string()),
            targetTrackIds(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterBySeriesRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the filter by
         *                        track operation will be performed. Must be a
         *                        currently existing table with track semantic
         *                        type.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Must not be an
         *                       already existing collection, table or view.
         *                       Default value is an empty string.
         * @param[in] trackId_  The ID of the track which will act as the
         *                      filtering points. Must be an existing track
         *                      within the given table.
         * @param[in] targetTrackIds_  Up to one track ID to intersect with the
         *                             "filter" track. If any provided, it must
         *                             be an valid track ID within the given
         *                             set.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> spatial_radius: A positive number
         *                      passed as a string representing the radius of
         *                      the search area centered around each track
         *                      point's geospatial coordinates. The value is
         *                      interpreted in meters. Required parameter.
         *                              <li> time_radius: A positive number
         *                      passed as a string representing the maximum
         *                      allowable time difference between the
         *                      timestamps of a filtered object and the given
         *                      track's points. The value is interpreted in
         *                      seconds. Required parameter.
         *                              <li> spatial_distance_metric: A string
         *                      representing the coordinate system to use for
         *                      the spatial search criteria. Acceptable values
         *                      are 'euclidean' and 'great_circle'. Optional
         *                      parameter; default is 'euclidean'. Values:
         *                      'euclidean', 'great_circle'.
         *                      </ul>
         *                        Default value is an empty std::map.
         * 
         */
        FilterBySeriesRequest(const std::string& tableName_, const std::string& viewName_, const std::string& trackId_, const std::vector<std::string>& targetTrackIds_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            trackId( trackId_ ),
            targetTrackIds( targetTrackIds_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::string trackId;
        std::vector<std::string> targetTrackIds;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterBySeriesRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterBySeriesRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.trackId);
            ::avro::encode(e, v.targetTrackIds);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterBySeriesRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.trackId);
                            break;

                        case 3:
                            ::avro::decode(d, v.targetTrackIds);
                            break;

                        case 4:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.trackId);
                ::avro::decode(d, v.targetTrackIds);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterBySeries(const FilterBySeriesRequest&) const}.
     * <p>
     * Filters objects matching all points of the given track (works only on
     * track type data).  It allows users to specify a particular track to find
     * all other points in the table that fall within specified ranges-spatial
     * and temporal-of all points of the given track. Additionally, the user
     * can specify another track to see if the two intersect (or go close to
     * each other within the specified ranges). The user also has the
     * flexibility of using different metrics for the spatial distance
     * calculation: Euclidean (flat geometry) or Great Circle (spherical
     * geometry to approximate the Earth's surface distances). The filtered
     * points are stored in a newly created result set. The return value of the
     * function is the number of points in the resultant set (view).
     * <p>
     * This operation is synchronous meaning that GPUdb will not return a
     * response until all the objects are fully available.
     */
    struct FilterBySeriesResponse
    {

        /**
         * Constructs a FilterBySeriesResponse object with default parameter
         * values.
         */
        FilterBySeriesResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterBySeriesResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterBySeriesResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterBySeriesResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
