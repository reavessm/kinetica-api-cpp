/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __AGGREGATE_MIN_MAX_GEOMETRY_H__
#define __AGGREGATE_MIN_MAX_GEOMETRY_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #aggregateMinMaxGeometry(const AggregateMinMaxGeometryRequest&) const}.
     * <p>
     * Calculates and returns the minimum and maximum x- and y-coordinates of a
     * particular geospatial geometry column in a table.
     */
    struct AggregateMinMaxGeometryRequest
    {

        /**
         * Constructs an AggregateMinMaxGeometryRequest object with default
         * parameter values.
         */
        AggregateMinMaxGeometryRequest() :
            tableName(std::string()),
            columnName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AggregateMinMaxGeometryRequest object with the
         * specified parameters.
         * 
         * @param[in] tableName_  Name of the table on which the operation will
         *                        be performed. Must be an existing table.
         * @param[in] columnName_  Name of a geospatial geometry column on
         *                         which the min-max will be calculated.
         * @param[in] options_  Optional parameters.
         * 
         */
        AggregateMinMaxGeometryRequest(const std::string& tableName_, const std::string& columnName_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            columnName( columnName_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string columnName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AggregateMinMaxGeometryRequest>
    {
        static void encode(Encoder& e, const gpudb::AggregateMinMaxGeometryRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.columnName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AggregateMinMaxGeometryRequest& v)
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
                            ::avro::decode(d, v.columnName);
                            break;

                        case 2:
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
                ::avro::decode(d, v.columnName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #aggregateMinMaxGeometry(const AggregateMinMaxGeometryRequest&) const}.
     * <p>
     * Calculates and returns the minimum and maximum x- and y-coordinates of a
     * particular geospatial geometry column in a table.
     */
    struct AggregateMinMaxGeometryResponse
    {

        /**
         * Constructs an AggregateMinMaxGeometryResponse object with default
         * parameter values.
         */
        AggregateMinMaxGeometryResponse() :
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double())
        {
        }

        double minX;
        double maxX;
        double minY;
        double maxY;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AggregateMinMaxGeometryResponse>
    {
        static void encode(Encoder& e, const gpudb::AggregateMinMaxGeometryResponse& v)
        {
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
        }

        static void decode(Decoder& d, gpudb::AggregateMinMaxGeometryResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.minX);
                            break;

                        case 1:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 2:
                            ::avro::decode(d, v.minY);
                            break;

                        case 3:
                            ::avro::decode(d, v.maxY);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
            }
        }
    };
}

#endif
